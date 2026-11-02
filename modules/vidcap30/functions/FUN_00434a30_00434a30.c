/* Module: vidcap30.exe
   Function: FUN_00434a30
   Address: 00434a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00434a30(int param_1,undefined4 param_2)

{
  int iVar1;
  HMENU pHVar2;
  
  iVar1 = _SfGetSubmenuByID_12(DAT_005ba504,0x9d3c,0);
  if (iVar1 == 0) {
    pHVar2 = (HMENU)_SfGetSubmenuByID_12(DAT_005ba504,0x9d13,0);
    if (pHVar2 == (HMENU)0x0) {
      pHVar2 = (HMENU)_SfGetSubmenuByID_12(DAT_005ba504,0x9d14,0);
      if (pHVar2 == (HMENU)0x0) goto LAB_00434a91;
    }
    AppendMenuA(pHVar2,0,0x9d3c,"No Capture Device");
  }
LAB_00434a91:
  _SfCullMenu_16(DAT_005ba504,&DAT_005b57fc,0x1a,1);
  pHVar2 = (HMENU)_SfGetSubmenuByID_12(DAT_005ba504,0x9d3c,0);
  DeleteMenu(pHVar2,0x9d3c,0);
  FUN_00420c70(param_1 + 0xa48,1,0x9d13,0,0,pHVar2,1);
  FUN_0042bc80(param_1 + 0xa48,0x9d2d,0x9d3b,param_2,1);
  return;
}


