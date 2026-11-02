/* Module: rv303260.dll
   Function: FUN_6720c650
   Address: 6720c650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6720c650(FILE *param_1)

{
  FILE *_File;
  size_t sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iStack_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined1 local_6;
  undefined1 local_5;
  
  _File = param_1;
  uVar3 = 0;
  local_10 = 0;
  local_c = 0;
  if (param_1 == (FILE *)0x0) {
    return 0;
  }
  rewind(param_1);
  while ((((sVar1 = fread(&local_14,4,1,_File), sVar1 != 0 &&
           (sVar1 = fread((void *)((int)&param_1 + 3),1,1,_File), sVar1 != 0)) &&
          (sVar1 = fread(&iStack_18,4,1,_File), sVar1 != 0)) &&
         ((sVar1 = fread(&local_5,1,1,_File), sVar1 != 0 &&
          (sVar1 = fread(&local_6,1,1,_File), sVar1 != 0))))) {
    if (local_10 == 0) {
      local_10 = 1;
    }
    for (uVar3 = uVar3 + iStack_18; 0x80000000 < uVar3; uVar3 = uVar3 + 0x80000000) {
      local_c = local_c + 1;
    }
  }
  iStack_18 = 0;
  uVar2 = ftol();
  return uVar2;
}


