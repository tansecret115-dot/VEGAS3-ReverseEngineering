/* Module: sftrans1.dll
   Function: FUN_0052ff30
   Address: 0052ff30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052ff30(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint local_4;
  
  if (param_3 == 0) {
    return 0x80070005;
  }
  iVar1 = FUN_00538380();
  if (iVar1 == 0) {
    return 0x80070005;
  }
  iVar1 = FUN_00538400(&local_4,&param_3);
  if (iVar1 != 0) {
    uVar2 = FUN_00537d40(param_1);
    if (param_2 != 0) {
      uVar3 = FUN_00538200(param_2,3);
      uVar2 = uVar2 ^ uVar3;
    }
    bVar4 = 0x20 - (char)param_3;
    if (local_4 != ((uint)(-1 << (bVar4 & 0x1f)) >> (bVar4 & 0x1f) & uVar2)) {
      return 0x80070005;
    }
  }
  return 0;
}


