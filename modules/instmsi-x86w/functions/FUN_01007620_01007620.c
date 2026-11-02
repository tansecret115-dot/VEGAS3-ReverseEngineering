/* Module: InstMsi-x86w.exe
   Function: FUN_01007620
   Address: 01007620
   Source: Ghidra pseudocode (Stage 10 batch) */


byte __cdecl FUN_01007620(int *param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  uint local_4;
  
  local_4 = 0;
  if (*param_1 != 0x4349444c) {
    return 2;
  }
  uVar1 = *param_5;
  if ((uint)param_1[8] < uVar1) {
    return 3;
  }
  iVar2 = FUN_010077e0((int *)param_1[10],uVar1,param_2,param_3,param_4,uVar1,&local_4);
  *param_5 = local_4;
  return (iVar2 == 0) - 1U & 4;
}


