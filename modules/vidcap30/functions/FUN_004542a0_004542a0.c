/* Module: vidcap30.exe
   Function: FUN_004542a0
   Address: 004542a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004542a0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  _Memory = calloc(1,0x44);
  puVar1 = param_1;
  param_1[0xd] = 0xffffffff;
  if (_Memory != (undefined4 *)0x0) {
    *_Memory = *param_3;
    _Memory[3] = param_3[3];
    _Memory[4] = param_3[4];
    iVar2 = FUN_00454440(_Memory,param_3[1]);
    if (iVar2 != 0) {
      param_1 = _Memory;
      iVar2 = _SfList_InsertList_16(puVar1[0xb],param_2,&param_1,1);
      if (-1 < iVar2) {
        iVar3 = _SfList_FindSpecificItemRange_16(puVar1[0xb],0,0xffffffff,_Memory);
        if (iVar3 != -1) goto LAB_00454333;
      }
    }
    if ((void *)_Memory[1] != (void *)0x0) {
      free((void *)_Memory[1]);
    }
    free(_Memory);
  }
LAB_00454333:
  FUN_004544d0(puVar1,0);
  if ((*(byte *)(puVar1 + 0x16) & 1) != 0) {
    InvalidateRect((HWND)puVar1[2],(RECT *)(puVar1 + 5),1);
  }
  return iVar3;
}


