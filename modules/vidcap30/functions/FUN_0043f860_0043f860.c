/* Module: vidcap30.exe
   Function: FUN_0043f860
   Address: 0043f860
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043f860(void)

{
  int iVar1;
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  local_104[0] = '\0';
  FUN_0045c430(local_104,0x104);
  local_208[0] = '\0';
  FUN_0045c240();
  FUN_0045c430(local_208,0x104);
  iVar1 = lstrcmpiA(local_104,local_208);
  if (iVar1 != 0) {
    DAT_005ba50c = DAT_005ba50c | 0x20;
  }
  return;
}


