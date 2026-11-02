/* Module: vidcap30.exe
   Function: FUN_004271f0
   Address: 004271f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004271f0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2;
  *param_2 = 0;
  param_2 = (undefined4 *)0x7fd02001;
  iVar2 = FUN_004270f0(param_1,&param_2,4);
  if (iVar2 == 0) {
    if ((DAT_005b5366 == param_2._2_1_) && (DAT_005b5367 == param_2._3_1_)) {
      *puVar1 = 0x13ab;
      return;
    }
    if ((DAT_005b536a == param_2._2_1_) && (DAT_005b536b == param_2._3_1_)) {
      *puVar1 = 0x13ab;
      return;
    }
    if ((DAT_005b5362 == param_2._2_1_) && (DAT_005b5363 == param_2._3_1_)) {
      *puVar1 = 0x1324;
      return;
    }
    if ((DAT_005b538e == param_2._2_1_) && (DAT_005b538f == param_2._3_1_)) {
      *puVar1 = 0x10cb;
      return;
    }
    if ((DAT_005b5312 == param_2._2_1_) && (DAT_005b5313 == param_2._3_1_)) {
      *puVar1 = 0x1322;
      return;
    }
    if ((DAT_005b5342 == param_2._2_1_) && (DAT_005b5343 == param_2._3_1_)) {
      *puVar1 = 0x10c9;
      return;
    }
    if ((param_2._2_1_ == -0x3f) && (param_2._3_1_ == '`')) {
      *puVar1 = 0x139f;
    }
  }
  return;
}


