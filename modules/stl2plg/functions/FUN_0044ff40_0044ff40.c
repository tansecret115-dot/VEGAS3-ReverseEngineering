/* Module: stl2plg.dll
   Function: FUN_0044ff40
   Address: 0044ff40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044ff40(int *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  sVar1 = fread(param_2,1,param_3,(FILE *)param_1[0x17]);
  if (sVar1 != param_3) {
    FUN_0044fa30(param_1,"Read Error");
  }
  return;
}


