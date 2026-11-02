/* Module: mp3rw.dll
   Function: FUN_00401030
   Address: 00401030
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00401030(HMODULE param_1)

{
  bool bVar1;
  int3 extraout_var;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uchar local_104 [260];
  
  puVar4 = &DAT_004a8110;
  for (iVar3 = 0xfa; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  DAT_004a8110 = param_1;
  bVar1 = FUN_00423550(param_1);
  iVar3 = CONCAT31(extraout_var,bVar1);
  if (-1 < extraout_var) {
    iVar3 = FUN_0041efa0(&DAT_004a811c,param_1,0,0);
    if (-1 < iVar3) {
      FUN_00421000(param_1,0,"SfRegister");
      iVar2 = FUN_0041f7f0(DAT_004a811c,&PTR_s_The_number_that_you_have_entered_004a4010,0x1b7,10000
                          );
      iVar3 = 0;
      if (iVar2 != 0) {
        return false;
      }
    }
  }
  DisableThreadLibraryCalls(param_1);
  FUN_0041cda0(param_1,&DAT_004a8138,0x104);
  local_104[0] = '\0';
  FUN_0041c2b0(0,param_1,local_104,0x104);
  FUN_0041c2f0(0,(LPCSTR)local_104);
  FUN_0041c2b0(1,param_1,local_104,0x104);
  FUN_0041c2f0(1,(LPCSTR)local_104);
  return -1 < iVar3;
}


