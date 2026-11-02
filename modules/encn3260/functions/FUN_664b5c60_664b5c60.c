/* Module: encn3260.dll
   Function: FUN_664b5c60
   Address: 664b5c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b5c60(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*param_1 & 1) != 0) {
    local_c = param_2;
    local_8 = param_3;
    if ((param_1 != (byte *)0x0) && (piVar1 = *(int **)(param_1 + 0xb68), piVar1 != (int *)0x0)) {
      uVar2 = (**(code **)(*piVar1 + 0x74))(piVar1,4,&local_c);
      return uVar2;
    }
  }
  return 0x80004005;
}


