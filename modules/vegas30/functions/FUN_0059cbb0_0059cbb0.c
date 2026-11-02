/* Module: vegas30.exe
   Function: FUN_0059cbb0
   Address: 0059cbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0059cc3e) */

int FUN_0059cbb0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                uint param_6,int param_7,uint param_8,int param_9,int param_10,float param_11,
                uint param_12,undefined4 param_13)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 local_50 [2];
  float local_48;
  float local_44;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  param_2 = (uint)*(ushort *)(param_1 + 0xc) * param_4 + param_2;
  uVar3 = param_6 - param_8;
  iVar5 = (param_7 - param_9) - (uint)(param_6 < param_8);
  uVar1 = (*(uint **)(param_12 + 0x30))[2];
  uVar2 = **(uint **)(param_12 + 0x30);
  param_1 = 0;
  if (1 < uVar2) {
    param_12 = 1;
    do {
      lVar6 = ftol();
      if (CONCAT44(iVar5,uVar3) < lVar6) {
        if (param_1 != -1) {
          local_50[0] = *(undefined4 *)(param_1 * 0x10 + 0xc + uVar1);
          iVar4 = param_1 * 0x10 + uVar1;
          local_48 = param_11 * *(float *)(iVar4 + 8);
          local_44 = param_11 * *(float *)(iVar4 + 0x18);
          uVar7 = ftol();
          iVar4 = uVar3 - (uint)uVar7;
          local_34 = (iVar5 - (int)((ulonglong)uVar7 >> 0x20)) - (uint)(uVar3 < (uint)uVar7);
          local_38 = iVar4;
          iVar5 = ftol();
          local_30 = ftol();
          local_30 = iVar5 - local_30;
          iVar4 = local_30 - iVar4;
          local_20 = 0;
          local_1c = 0x3ff00000;
          local_18 = 0;
          local_14 = 0;
          if (iVar4 <= param_10) {
            param_10 = iVar4;
          }
          FUN_00599db0(local_50,param_3,param_2,param_10,param_13);
          return param_10;
        }
        break;
      }
      param_1 = param_1 + 1;
      param_12 = param_12 + 1;
    } while (param_12 < uVar2);
  }
  FUN_0059bd70(param_2,param_3,param_10,(double)(param_11 * *(float *)(uVar2 * 0x10 + -8 + uVar1)),
               param_13);
  return param_10;
}


