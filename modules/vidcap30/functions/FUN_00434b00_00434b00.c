/* Module: vidcap30.exe
   Function: FUN_00434b00
   Address: 00434b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00434b00(int param_1,undefined4 param_2)

{
  int iVar1;
  HMENU pHVar2;
  
  iVar1 = _SfGetSubmenuByID_12(DAT_005ba504,0x9d3d,0);
  if (iVar1 == 0) {
    pHVar2 = (HMENU)_SfGetSubmenuByID_12(DAT_005ba504,0x9d23,0);
    if (pHVar2 == (HMENU)0x0) {
      pHVar2 = (HMENU)_SfGetSubmenuByID_12(DAT_005ba504,0x9d24,0);
      if (pHVar2 == (HMENU)0x0) goto LAB_00434b61;
    }
    AppendMenuA(pHVar2,0,0x9d3d,"No Capture Device");
  }
LAB_00434b61:
  _SfCullMenu_16(DAT_005ba504,&DAT_005b5864,0x1a,1);
  pHVar2 = (HMENU)_SfGetSubmenuByID_12(DAT_005ba504,0x9d3d,0);
  DeleteMenu(pHVar2,0x9d3d,0);
  FUN_00420c70(param_1 + 0xa48,0,0,1,0x9d23,pHVar2,1);
  FUN_0042bc80(param_1 + 0xa48,0x9d66,0x9d74,param_2,0);
  return;
}


