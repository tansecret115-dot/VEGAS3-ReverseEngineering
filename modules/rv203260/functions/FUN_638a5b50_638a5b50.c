/* Module: rv203260.dll
   Function: FUN_638a5b50
   Address: 638a5b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_638a5b50(int *param_1,FILE *param_2)

{
  FILE *_File;
  size_t sVar1;
  
  _File = param_2;
  sVar1 = fread((void *)((int)&param_2 + 3),1,1,param_2);
  if (sVar1 != 0) {
    while ((param_2._3_1_ < '0' || ('9' < param_2._3_1_))) {
      sVar1 = fread((void *)((int)&param_2 + 3),1,1,_File);
      if (sVar1 == 0) {
        return;
      }
    }
    *param_1 = param_2._3_1_ + -0x30;
    sVar1 = fread((void *)((int)&param_2 + 3),1,1,_File);
    while ((('/' < param_2._3_1_ && (param_2._3_1_ < ':')) && (sVar1 != 0))) {
      *param_1 = param_2._3_1_ + -0x30 + *param_1 * 10;
      sVar1 = fread((void *)((int)&param_2 + 3),1,1,_File);
    }
  }
  return;
}


