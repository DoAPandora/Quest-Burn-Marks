#include "beatsaber-hook/shared/utils/logging.hpp"
#include "beatsaber-hook/shared/utils/hooking.hpp"
#include "config.hpp"

//#include "GlobalNamespace/SaberBurnMarkArea.hpp"
#include "GlobalNamespace/BoolSO.hpp"
#include "UnityEngine/Camera.hpp"
#include "UnityEngine/LineRenderer.hpp"
#include "UnityEngine/Renderer.hpp"
#include "UnityEngine/Texture2D.hpp"
#include "UnityEngine/Material.hpp"

	bool enableBurnMarks = true;

//stops the marks from spawning, this way it allows it to be configurable during runtime without a reload.
	//if (config.enableBurnMarks) {
		//SaberBurnMarkArea_LateUpdate(self);
	//} else
		self->_renderer->get_sharedMaterial()->set_mainTexture(UnityEngine::Texture2D::get_blackTexture()); {
}
