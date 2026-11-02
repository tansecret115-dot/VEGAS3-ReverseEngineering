/* Module: gifplug.dll
   Function: FUN_5f6c2790
   Address: 5f6c2790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6c2790(int param_1,LPWSTR param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uchar local_104 [260];
  
  uVar1 = 1;
  *param_2 = L'\0';
  if ((param_4 == 2) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_5f6c5170(*(int *)(param_1 + 0x14),local_104);
    MultiByteToWideChar(0,1,(LPCSTR)local_104,-1,param_2,param_3);
    param_2[param_3 + -1] = L'\0';
    uVar1 = 0;
  }
  return uVar1;
}


