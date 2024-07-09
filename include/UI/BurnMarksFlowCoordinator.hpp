#pragma once

#include "custom-types/shared/coroutine.hpp"
#include "custom-types/shared/macros.hpp"

#include "HMUI/ViewController.hpp"
#include "HMUI/FlowCoordinator.hpp"
#include "UI/AdvancedSettingsView.hpp"
#include "UI/PresetsView.hpp"
#include "UI/SettingsView.hpp"

#define GET_FIND_METHOD(mPtr) il2cpp_utils::il2cpp_type_check::MetadataGetter<mPtr>::get()

DECLARE_CLASS_CODEGEN(BurnMarks::UI, BurnMarksFlowCoordinator, HMUI::FlowCoordinator,
    DECLARE_INSTANCE_FIELD(BurnMarks::UI::SettingsView*, settingsView);

    DECLARE_INSTANCE_METHOD(void, Awake);

    DECLARE_OVERRIDE_METHOD_MATCH(void, DidActivate, &HMUI::FlowCoordinator::DidActivate, bool firstActivation, bool addedToHeirarchy, bool screenSystemEnabling);
    DECLARE_OVERRIDE_METHOD_MATCH(void, BackButtonWasPressed, &HMUI::FlowCoordinator::BackButtonWasPressed, HMUI::ViewController* topViewController);

    void Close(bool immediately = false);


)


inline SafePtrUnity<BurnMarks::UI::BurnMarksFlowCoordinator> fcInstance; // Stores the ID and version of the mod, and is sent to the modloader upon startup
