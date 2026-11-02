/* Module: vegas30k.dll
   Function: ~CMeshWarp
   Address: 010714f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CMeshWarp::~CMeshWarp(void) */

void __thiscall CMeshWarp::~CMeshWarp(CMeshWarp *this)

{
                    /* 0x714f0  8  ??1CMeshWarp@@QAE@XZ */
  if (*(int *)(this + 8) != 0) {
    _SfList_Destroy_4(*(int *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


