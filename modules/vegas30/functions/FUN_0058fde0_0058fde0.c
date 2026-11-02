/* Module: vegas30.exe
   Function: FUN_0058fde0
   Address: 0058fde0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0058fde0(int param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(short *)(*(int *)(*(int *)(param_1 + 0x18) + 0x2c) + 2) == 1) {
    iVar2 = *(int *)(DAT_0065a06c + 0x84);
  }
  else {
    iVar2 = *(int *)(DAT_0065a06c + 0x6c);
  }
  iVar1 = (int)(0x9ff38 / (ulonglong)(longlong)(int)(uint)*(ushort *)(iVar2 + 0xc));
  iVar2 = ftol();
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  *param_3 = iVar2;
  uVar3 = ftol();
  *param_2 = uVar3;
  return;
}


