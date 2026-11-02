/* Module: pngu3266.dll
   Function: SetupDefRegion
   Address: 605fbb11
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SetupDefRegion(class CPNRegion *) */

void __thiscall CPNDC::SetupDefRegion(CPNDC *this,CPNRegion *param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0xbb11  2054  ?SetupDefRegion@CPNDC@@UAEXPAVCPNRegion@@@Z */
  local_14 = 0;
  local_10 = 0;
  local_c = 10;
  local_8 = 10;
  (**(code **)(*(int *)param_1 + 0x10))(&local_14);
  iVar1 = GetClipRgn(*(HDC *)(this + 0x1cf),*(HRGN *)(param_1 + 0xc));
  if ((iVar1 == 0) || (iVar1 == -1)) {
    (**(code **)(*(int *)param_1 + 0x28))();
  }
  return;
}


