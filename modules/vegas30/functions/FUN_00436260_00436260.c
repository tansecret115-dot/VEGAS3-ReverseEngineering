/* Module: vegas30.exe
   Function: FUN_00436260
   Address: 00436260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00436260(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar2 = FUN_0052b130(1);
  *(undefined4 *)(iVar2 + 4) = 0;
  local_4 = 0;
  iVar3 = FUN_0052b020(DAT_00647624,"Plug-In Chooser - New Media Generator",6,iVar2,0,1,1,&local_4,1
                      );
  if (((iVar3 == 0) && (piVar1 = *(int **)(iVar2 + 8), piVar1 != (int *)0x0)) && (*piVar1 == 1)) {
    FUN_00435ee0(param_1,param_2,*(undefined4 *)piVar1[2]);
  }
  FUN_0052b170(iVar2,1);
  return 0;
}


