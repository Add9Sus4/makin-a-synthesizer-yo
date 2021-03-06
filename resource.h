#define PLUG_MFR "Add9Sus4"
#define PLUG_NAME "AudioComponents"

#define PLUG_CLASS_NAME AudioComponents

#define BUNDLE_MFR "Add9Sus4"
#define BUNDLE_NAME "AudioComponents"

#define PLUG_ENTRY AudioComponents_Entry
#define PLUG_VIEW_ENTRY AudioComponents_ViewEntry

#define PLUG_ENTRY_STR "AudioComponents_Entry"
#define PLUG_VIEW_ENTRY_STR "AudioComponents_ViewEntry"

#define VIEW_CLASS AudioComponents_View
#define VIEW_CLASS_STR "AudioComponents_View"

// Format        0xMAJR.MN.BG - in HEX! so version 10.1.5 would be 0x000A0105
#define PLUG_VER 0x00010000
#define VST3_VER_STR "1.0.0"

// http://service.steinberg.de/databases/plugin.nsf/plugIn?openForm
// 4 chars, single quotes. At least one capital letter
#define PLUG_UNIQUE_ID 'Ipef'
// make sure this is not the same as BUNDLE_MFR
#define PLUG_MFR_ID 'Acme'

// ProTools stuff

#if (defined(AAX_API) || defined(RTAS_API)) && !defined(_PIDS_)
  #define _PIDS_
  const int PLUG_TYPE_IDS[2] = {'EFN1', 'EFN2'};
  const int PLUG_TYPE_IDS_AS[2] = {'EFA1', 'EFA2'}; // AudioSuite
#endif

#define PLUG_MFR_PT "Add9Sus4\nAdd9Sus4\nAcme"
#define PLUG_NAME_PT "AudioComponents\nIPEF"
#define PLUG_TYPE_PT "Effect"
#define PLUG_DOES_AUDIOSUITE 1

/* PLUG_TYPE_PT can be "None", "EQ", "Dynamics", "PitchShift", "Reverb", "Delay", "Modulation", 
"Harmonic" "NoiseReduction" "Dither" "SoundField" "Effect" 
instrument determined by PLUG _IS _INST
*/

//#define PLUG_CHANNEL_IO "1-1 2-2"

//#define PLUG_CHANNEL_IO "1-1 2-2"
#if (defined(AAX_API) || defined(RTAS_API))
#define PLUG_CHANNEL_IO "1-1 2-2"
#else
// no audio input. mono or stereo output
#define PLUG_CHANNEL_IO "0-1 0-2"
#endif

#define PLUG_LATENCY 0
#define PLUG_IS_INST 1
//#define PLUG_IS_INST 0

// if this is 0 RTAS can't get tempo info
#define PLUG_DOES_MIDI 1
//#define PLUG_DOES_MIDI 0

#define PLUG_DOES_STATE_CHUNKS 0

// Unique IDs for each image resource.
#define KNOB_ID             101
#define ISWITCHCONTROL_6_ID 102
#define PHASE_MODE_ID       103
#define BACKGROUND_ID       104
#define SAW_ID              105
#define SINE_ID             106
#define SQUARE_ID           107
#define PULSE_ID            108
#define TRIANGLE_ID         109
#define NOISE_ID            110
#define KNOB2_ID            111
#define KNOB3_ID            112
#define BACKGROUND2_ID      113
#define FADER_ID            114
#define BACKGROUND3_ID      115
#define KNOB4_ID            116

#define OSC1_ID             117
#define OSC2_ID             118

#define SPF1_ID             119
#define SPF2_ID             120

#define LFO1_ID             121
#define LFO2_ID             122
#define LFO3_ID             123
#define LFO4_ID             124

#define FMF1_ID             125
#define FMF2_ID             126

#define FLN1_ID             127
#define FLN2_ID             128

#define ENVA_ID             129
#define ENV1_ID             130
#define ENV2_ID             131
#define ENV3_ID             132

#define CHO1_ID             133
#define CHO2_ID             134

#define BQF1_ID             135
#define BQF2_ID             136

#define OSCILLATOR1SLOTDISPLAY_ID 137
#define OSCILLATOR1_ID            138

#define FADER2_ID                  139

// Image resource locations for this plug.
#define KNOB_FN             "resources/img/knob.png"
#define ISWITCHCONTROL_6_FN "resources/img/waveform.png"
#define PHASE_MODE_FN       "resources/img/phaseMode.png"
#define BACKGROUND_FN       "resources/img/Add9Synthesizer.png"
#define SAW_FN              "resources/img/saw.png"
#define SINE_FN             "resources/img/sine.png"
#define SQUARE_FN           "resources/img/square.png"
#define PULSE_FN            "resources/img/pulse.png"
#define TRIANGLE_FN         "resources/img/triangle.png"
#define NOISE_FN            "resources/img/noise.png"
#define KNOB2_FN            "resources/img/ZebraKnob2.png"
#define KNOB3_FN            "resources/img/Add9NiceLookingKnob.png"
#define BACKGROUND2_FN      "resources/img/TestSynthBackground.png"
#define FADER_FN            "resources/img/IFaderControl_Vert.png"
#define BACKGROUND3_FN      "resources/img/ADD_Synthesizer_Template4.png"
#define KNOB4_FN            "resources/img/SerumKnob.png"

#define OSC1_FN             "resources/img/Osc1.png"
#define OSC2_FN             "resources/img/Osc2.png"

#define SPF1_FN             "resources/img/Spf1.png"
#define SPF2_FN             "resources/img/Spf2.png"

#define LFO1_FN             "resources/img/Lfo1.png"
#define LFO2_FN             "resources/img/Lfo2.png"
#define LFO3_FN             "resources/img/Lfo3.png"
#define LFO4_FN             "resources/img/Lfo4.png"

#define FMF1_FN             "resources/img/Fmf1.png"
#define FMF2_FN             "resources/img/Fmf2.png"

#define FLN1_FN             "resources/img/Fln1.png"
#define FLN2_FN             "resources/img/Fln2.png"

#define ENVA_FN             "resources/img/Enva.png"
#define ENV1_FN             "resources/img/Env1.png"
#define ENV2_FN             "resources/img/Env2.png"
#define ENV3_FN             "resources/img/Env3.png"

#define CHO1_FN             "resources/img/Cho1.png"
#define CHO2_FN             "resources/img/Cho2.png"

#define BQF1_FN             "resources/img/Bqf1.png"
#define BQF2_FN             "resources/img/Bqf2.png"

#define OSCILLATOR1SLOTDISPLAY_FN "Oscillator1SlotDisplay.png"
#define OSCILLATOR1_FN      "resources/img/Oscillator1.png"

#define FADER2_FN            "resources/img/Fader.png"

// Colors
#define BACKGROUND_COLOR_1_R  31./255.
#define BACKGROUND_COLOR_1_G  39./255.
#define BACKGROUND_COLOR_1_B  46./255.

// GUI default dimensions
#define GUI_WIDTH 960
#define GUI_HEIGHT 640

// on MSVC, you must define SA_API in the resource editor preprocessor macros as well as the c++ ones
#if defined(SA_API) && !defined(OS_IOS)
#include "app_wrapper/app_resource.h"
#endif

// vst3 stuff
#define MFR_URL "www.olilarkin.co.uk"
#define MFR_EMAIL "spam@me.com"
#define EFFECT_TYPE_VST3 "Fx"

/* "Fx|Analyzer"", "Fx|Delay", "Fx|Distortion", "Fx|Dynamics", "Fx|EQ", "Fx|Filter",
"Fx", "Fx|Instrument", "Fx|InstrumentExternal", "Fx|Spatial", "Fx|Generator",
"Fx|Mastering", "Fx|Modulation", "Fx|PitchShift", "Fx|Restoration", "Fx|Reverb",
"Fx|Surround", "Fx|Tools", "Instrument", "Instrument|Drum", "Instrument|Sampler",
"Instrument|Synth", "Instrument|Synth|Sampler", "Instrument|External", "Spatial",
"Spatial|Fx", "OnlyRT", "OnlyOfflineProcess", "Mono", "Stereo",
"Surround"
*/
