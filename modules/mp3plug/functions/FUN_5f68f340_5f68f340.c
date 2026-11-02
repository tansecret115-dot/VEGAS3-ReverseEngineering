/* Module: mp3plug.dll
   Function: FUN_5f68f340
   Address: 5f68f340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f68f340(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *param_1) {
    do {
      piVar1 = *(int **)(param_1[2] + iVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_1);
  }
  FUN_5f6b5480(param_1,0,-1,0);
  *(undefined4 *)((int)this + 0x118) = 0;
  return;
}


