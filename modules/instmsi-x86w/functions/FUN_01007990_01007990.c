/* Module: InstMsi-x86w.exe
   Function: FUN_01007990
   Address: 01007990
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_01007990(int param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01007de4(param_2,*(undefined4 *)(param_1 + 0x2ec4),*(char **)(param_1 + 0x2ec8),
                       *(undefined4 *)(param_1 + 0x2ec4),(char *)param_2,param_3);
  *(int *)(param_1 + 0x2ec8) = (int)uVar1;
  return;
}


