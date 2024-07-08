#include "UI/Settings/BurnMarksSettingsViewController.hpp"
#include "bsml/shared/BSML.hpp"
#include "Utils/UIUtils.hpp"
#include "config.hpp"
#include "logging.hpp"

DEFINE_TYPE(BurnMarks::UI, BurnMarksSettingsViewController);

using namespace UnityEngine;
using namespace UnityEngine::UI;
using namespace HMUI;
using namespace BSML::Lite;

// simple toggle macro because typing the same thing every time is dumb
#define TOGGLE(name, displayName) \
	CreateToggle(container->get_transform(), displayName, config.name, [](bool value) -> void { \
		config.name = value; \
		SaveConfig(); \
	});

namespace PinkCore::UI
{
	void BurnMarksSettingsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)
	{
		if (firstActivation)
		{
			GameObject* container = CreateScrollableSettingsContainer(get_transform());

			TOGGLE(enableBurnMarks, "Enable Quest Burn Marks");
		} else if (customColourToggle && customColourToggle->m_CachedPtr) {
			customColourToggle->set_Value(config.enableCustomSongColours);
		}

	}
}
