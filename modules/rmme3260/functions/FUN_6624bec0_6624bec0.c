/* Module: rmme3260.dll
   Function: FUN_6624bec0
   Address: 6624bec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_6624bec0(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
  if ((*param_1 & 1) != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x86c) + 0x50))
                      (*(int **)(param_1 + 0x86c),param_5,0x11);
    if (iVar2 == 0) {
      piVar1 = *(int **)(param_1 + 0xb68);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1[0xb68] = 0;
        param_1[0xb69] = 0;
        param_1[0xb6a] = 0;
        param_1[0xb6b] = 0;
      }
      (**(code **)(**(int **)(param_1 + 0x86c) + 0x54))
                (*(int **)(param_1 + 0x86c),param_2,param_3,param_4,0,0);
      FUN_6624c040((int *)param_1);
    }
  }
  return 0x80004005;
}


