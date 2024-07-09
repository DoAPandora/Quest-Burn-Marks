#include "UI/BurnMarksFlowCoordinator.hpp"
#include "UI/BurnMarksSettingsViewController.hpp"

#include "bsml/shared/BSML.hpp"
#include "bsml/shared/Helpers/creation.hpp"

#include "HMUI/TitleViewController.hpp"

DEFINE_TYPE(BurnMarks::UI, BurnMarksFlowCoordinator);

using namespace UnityEngine;
using namespace UnityEngine::UI;
using namespace HMUI;
using namespace BSML::Lite;

namespace BurnMarks::UI

	void BurnMarks::UI::BurnMarksFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)
	{
		if (firstActivation)
		{
			//BurnMarksSettingsViewController = BSML::Helpers::CreateViewController<BurnMarksSettingsViewController*>(); {

			SetTitle("QuestBurnMarks Settings", ViewController::AnimationType::Out);
			showBackButton = true;

			//ProvideInitialViewControllers(BurnMarksSettingsViewController, nullptr,);
		}

		TitleViewController* titleView = Object::FindObjectOfType<TitleViewController*>();
	}

	void BurnMarksFlowCoordinator::BackButtonWasPressed(HMUI::ViewController* topViewController);
	
		TitleViewController* titleView = Object::FindObjectOfType<TitleViewController*>();
		this->_parentFlowCoordinator->DismissFlowCoordinator(this, ViewController::AnimationDirection::Horizontal, nullptr, false); {
}
