/* Module: vegas30k.dll
   Function: operator=
   Address: 010714c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CMeshWarp & __thiscall CMeshWarp::operator=(class CMeshWarp const &) */

CMeshWarp * __thiscall CMeshWarp::operator=(CMeshWarp *this,CMeshWarp *param_1)

{
                    /* 0x714c0  10  ??4CMeshWarp@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


