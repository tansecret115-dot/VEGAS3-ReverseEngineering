/* Module: vegas30.exe
   Function: FUN_005dd150
   Address: 005dd150
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005dd150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  int local_4;
  
  iVar5 = param_6;
  iVar7 = param_5;
  uVar1 = param_1;
  local_8 = param_5;
  local_4 = param_6;
  iVar6 = riff64_GetNumListEntries(param_1,&param_1,&local_8);
  uVar4 = param_4;
  uVar3 = param_3;
  uVar2 = param_2;
  if (iVar6 == 0) {
    local_8 = iVar7;
    local_4 = iVar5;
    if (-1 < iVar5) {
      if (0 < iVar5) goto LAB_005dd19d;
      do {
        if (local_8 == 0) break;
LAB_005dd19d:
        do {
          iVar7 = FUN_005dcd10(uVar1,uVar2,uVar3,uVar4,&local_8);
          if (iVar7 != 0) {
            return iVar7;
          }
        } while (0 < local_4);
      } while (-1 < local_4);
    }
    iVar6 = 0;
  }
  return iVar6;
}


