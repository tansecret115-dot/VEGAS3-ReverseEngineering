/* Module: wmfplug2.dll
   Function: FUN_00441600
   Address: 00441600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00441600(LPSTR param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 == (LPSTR)0x0) {
    return 0x80070057;
  }
  iVar1 = lstrlenA("Software\\Sonic Foundry\\FileIO\\Templates");
  if (iVar1 + 1U <= param_2) {
    iVar1 = lstrlenA("Software\\Sonic Foundry\\FileIO\\Templates");
    param_2 = iVar1 + 1;
  }
  lstrcpynA(param_1,"Software\\Sonic Foundry\\FileIO\\Templates",param_2);
  param_1[param_2 - 1] = '\0';
  return 0;
}


