/* Module: vidcap30.exe
   Function: FUN_00548ae0
   Address: 00548ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00548ae0(int *param_1,undefined4 *param_2,LPRECT param_3,LPRECT param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int *)(*(int *)(param_1[2] + 0x94) + 0x24) + 0xc);
  (**(code **)(*piVar2 + 4))(piVar2);
  *param_1 = *(int *)(*(int *)(param_1[2] + 0x94) + 0x24) + 0xc;
  *param_2 = 0;
  FUN_005226e0(&stack0xffffffec);
  CopyRect(param_3,(RECT *)&stack0xffffffec);
  GetClientRect(*(HWND *)(*(int *)(param_1[2] + 0x94) + 0x28),(LPRECT)&stack0xffffffec);
  CopyRect(param_4,(RECT *)&stack0xffffffec);
  *(undefined4 *)(param_5 + 4) = 0;
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1[2] + 0x94) + 0x24) + 4);
  *(undefined4 *)(param_5 + 0xc) = 0;
  *(undefined4 *)(param_5 + 8) = uVar1;
  *(undefined4 *)(param_5 + 0x10) = 0;
  return 0;
}


