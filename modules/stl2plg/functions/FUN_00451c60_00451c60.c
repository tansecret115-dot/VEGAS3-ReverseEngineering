/* Module: stl2plg.dll
   Function: FUN_00451c60
   Address: 00451c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00451c60(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte local_c [4];
  byte local_8 [4];
  undefined1 local_4;
  
  if ((param_1[0x18] & 1U) == 0) {
    FUN_0044fa30(param_1,"Missing IHDR before pHYS");
  }
  else {
    if ((param_1[0x18] & 4U) != 0) {
      FUN_0044fa60((int)param_1,"Invalid pHYS after IDAT");
      FUN_00450790(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x80) != 0)) {
      FUN_0044fa60((int)param_1,"Duplicate pHYS chunk");
      FUN_00450790(param_1,param_3);
      return;
    }
  }
  if (param_3 != 9) {
    FUN_0044fa60((int)param_1,"Incorrect pHYs chunk length");
    FUN_00450790(param_1,param_3);
    return;
  }
  FUN_00450760(param_1,local_c,9);
  iVar1 = FUN_00450790(param_1,0);
  if (iVar1 == 0) {
    iVar1 = FUN_00450710(local_c);
    iVar2 = FUN_00450710(local_8);
    FUN_004577b0((int)param_1,param_2,iVar1,iVar2,local_4);
  }
  return;
}


