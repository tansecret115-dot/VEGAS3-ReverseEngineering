/* Module: vidcap30.exe
   Function: FUN_00408440
   Address: 00408440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00408440(int *param_1,HWND param_2)

{
  int iVar1;
  int *piVar2;
  HWND pHVar3;
  int iVar4;
  
  pHVar3 = param_2;
  piVar2 = param_1;
  iVar1 = param_1[1];
  SetWindowLongA(param_2,-0x15,(LONG)param_1);
  if ((piVar2[2] == 0) && (*(code **)(*piVar2 + 4) != (code *)0x0)) {
    (**(code **)(*piVar2 + 4))(piVar2,pHVar3);
  }
  piVar2[2] = (int)pHVar3;
  iVar4 = _SfList_FindSpecificItemRange_16(*(undefined4 *)(iVar1 + 0xa4),0,0xffffffff,piVar2);
  if (iVar4 < 0) {
    param_1 = piVar2;
    _SfList_InsertList_16(*(undefined4 *)(iVar1 + 0xa4),0xffffffff,&param_1,1);
  }
  iVar4 = _SfList_FindSpecificItemRange_16(*(undefined4 *)(iVar1 + 0xa8),0,0xffffffff,piVar2);
  if ((piVar2[3] & 3U) == 3) {
    if (iVar4 < 0) {
      param_1 = piVar2;
      _SfList_InsertList_16(*(undefined4 *)(iVar1 + 0xa8),0xffffffff,&param_1,1);
      return;
    }
  }
  else if (-1 < iVar4) {
    _SfList_DeleteList_16(*(undefined4 *)(iVar1 + 0xa8),iVar4,1,0);
  }
  return;
}


