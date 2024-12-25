#include "UI/BurnMarksFlowCoordinator.hpp"

#include "bsml/shared/Helpers/creation.hpp"
#include "bsml/shared/Helpers/getters.hpp"
#include "logging.hpp"

#include "GlobalNamespace/MenuTransitionsHelper.hpp"
#include "UnityEngine/Resources.hpp"
#include "bsml/shared/BSML/ViewControllers/HotReloadViewController.hpp"
#include "bsml/shared/BSML/MainThreadScheduler.hpp"

using namespace BurnMarksFlowCoordinator;

//DEFINE_TYPE(BurnMarks::UI, BurnMarksFlowCoordinator);

//DEFINE_TYPE(BurnMarks::UI::BurnMarksFlowCoordinator);

///void BurnMarks::UI::BurnMarksFlowCoordinator::Awake() {
    //fcInstance = this;
    //if (!settingsView) {
        //settingsView = BSML::Helpers::CreateViewController<BurnMarks::UI::SettingsView*>();
    //}
//}

//void BurnMarks::UI::BurnMarksFlowCoordinator::DidActivate(bool firstActivation, bool addedToHeirarchy, bool screenSystemEnabling) {
    //if (!firstActivation) return;

    SetTitle("Quest Burn Marks", HMUI::ViewController::AnimationType::In);
    this->____showBackButton = false;
    ProvideInitialViewControllers(settingsView, nullptr, nullptr);
//}

//void BurnMarks::UI::BurnMarksFlowCoordinator::BackButtonWasPressed(HMUI::ViewController* topViewController) {
    //this->Close();
//}

//void BurnMarks::UI::BurnMarksFlowCoordinator::Close(bool immediately){
    // Do nothing if there's no parent flow coordinator (in multiplayer if you never called it it crashed)
    
    BSML::MainThreadScheduler::ScheduleAfterTime(1.0f,[this]() {
        INFO("Saving Burn Marks config...");
        getBurnMarksConfig().Save();
    //});

    //if (fcInstance && fcInstance->get_isActiveAndEnabled() && fcInstance->get_isActivated()) {
        this->____parentFlowCoordinator->DismissFlowCoordinator(this, HMUI::ViewController::AnimationDirection::Horizontal, nullptr, immediately);
    }
//};
