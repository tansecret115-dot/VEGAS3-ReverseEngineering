/* Module: vegas30k.dll
   Function: CleanUp
   Address: 01071580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CMeshWarp::CleanUp(void) */

void __thiscall CMeshWarp::CleanUp(CMeshWarp *this)

{
                    /* 0x71580  21  ?CleanUp@CMeshWarp@@QAEXXZ */
  if (*(int *)(this + 8) != 0) {
    _SfList_Destroy_4(*(int *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


