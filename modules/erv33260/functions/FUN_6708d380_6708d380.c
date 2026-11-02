/* Module: erv33260.dll
   Function: FUN_6708d380
   Address: 6708d380
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl
FUN_6708d380(uint *param_1,byte *param_2,int param_3,int param_4,char *param_5,undefined4 *param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 auStackY_2264 [4];
  undefined4 auStackY_2254 [4];
  undefined4 auStackY_2244 [4];
  undefined4 auStackY_2234 [2028];
  byte local_264 [16];
  undefined4 auStack_254 [4];
  undefined4 auStack_244 [4];
  undefined4 auStack_234 [132];
  byte local_24 [20];
  byte local_10;
  undefined3 uStack_f;
  int local_c;
  char local_6;
  char local_5;
  
  local_5 = -1;
  uVar2 = (uint)(byte)(&DAT_67091788)[param_4] | *param_1;
  if ((uVar2 & 1) == 0) {
    local_6 = -1;
  }
  else {
    local_6 = param_5[-1];
  }
  if ((uVar2 & 4) != 0) {
    local_5 = param_5[-param_1[2]];
  }
  uVar4 = 0xfffffff;
  FUN_6708c9f0(uVar2,param_3,param_1[1],param_4,local_24);
  param_4 = 0;
  uVar2 = -(uint)(param_6 != (undefined4 *)0x0) & 6;
  if (uVar2 != 0xfffffffd) {
    iVar3 = 0;
    local_c = ((int)local_6 + local_5 * 10) * 9;
    do {
      bVar1 = (&DAT_67090b8b)[iVar3 + local_c];
      _local_10 = CONCAT31(uStack_f,bVar1);
      if ((bVar1 != 9) && (uVar5 = param_1[bVar1 + 9], uVar5 < uVar4)) {
        FUN_6708cb60(iVar3,(undefined4 *)(local_264 + iVar3 * 0x40),local_24);
        iVar3 = FUN_6708c7d0(param_2,local_264 + iVar3 * 0x40,param_1[1]);
        uVar5 = uVar5 + iVar3;
        if (uVar5 < uVar4) {
          *param_5 = param_4._3_1_;
          uVar4 = uVar5;
        }
      }
      bVar1 = param_4._3_1_ + 1;
      param_4 = (uint)bVar1 << 0x18;
      iVar3 = (int)(char)bVar1;
    } while (iVar3 < (int)(uVar2 + 3));
  }
  if (param_6 != (undefined4 *)0x0) {
    iVar3 = (int)*param_5;
    *param_6 = *(undefined4 *)(local_264 + iVar3 * 0x40);
    param_6[4] = auStack_254[iVar3 * 0x10];
    param_6[8] = auStack_244[iVar3 * 0x10];
    param_6[0xc] = auStack_234[iVar3 * 0x10];
  }
  return uVar4;
}


