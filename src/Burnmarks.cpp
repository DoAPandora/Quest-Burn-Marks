#include "beatsaber-hook/shared/utils/logging.hpp"
#include "beatsaber-hook/shared/utils/hooking.hpp"
#include "config.hpp"

	bool enableBurnMarks = true;

//stops the marks from spawning, this way it allows it to be configurable during runtime without a reload.
	if (config.enableBurnMarks) {
		SaberBurnMarkArea_LateUpdate(self);
	}
		//self->_renderer->get_sharedMaterial()->set_mainTexture(UnityEngine::Texture2D::get_blackTexture()); {
