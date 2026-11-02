/* Module: vegas30k.dll
   Function: Init
   Address: 01071500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall CMeshWarp::Init(int,int) */

long __thiscall CMeshWarp::Init(CMeshWarp *this,int param_1,int param_2)

{
  long lVar1;
  
                    /* 0x71500  117  ?Init@CMeshWarp@@QAEJHH@Z */
  lVar1 = _SfList_CreateExZ_32(this + 8,0x8010,0xffffffff,0xffffffff,4,0,0,0);
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return lVar1;
}


