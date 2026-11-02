/* Module: vegas30k.dll
   Function: FUN_011bcba0
   Address: 011bcba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011bcba0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x218);
  iVar3 = (**(code **)(*piVar1 + 0x30))();
  if (-1 < iVar3) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffd7;
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x254 + *(int *)(param_1 + 0x2b0) * 0xc),0xffffffff);
    piVar2 = *(int **)(param_1 + (*(int *)(param_1 + 0x2b0) + 0x31) * 0xc);
    (**(code **)(*piVar2 + 0x2c))(piVar2,&stack0x00000000);
    if (piVar1 != (int *)0x0) {
      (**(code **)(param_1 + 0x21c))
                (param_1,0x2b,*(undefined4 *)(param_1 + 0x220),
                 *(undefined4 *)(param_1 + (*(int *)(param_1 + 0x2b0) + 0x31) * 0xc),0,0xffffffff,
                 0xffffffff,0xffffffff,0xffffffff);
    }
    *(undefined4 *)(param_1 + 0x250 + *(int *)(param_1 + 0x2b0) * 0xc) = 1;
    SetEvent(*(HANDLE *)(param_1 + 0x254 + *(int *)(param_1 + 0x2b0) * 0xc));
    (**(code **)(param_1 + 0x21c))
              (param_1,0x27,*(undefined4 *)(param_1 + 0x220),0,0,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff);
  }
  return;
}


