/* Module: vegas30.exe
   Function: FUN_0052be50
   Address: 0052be50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052be50(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte local_40;
  char cStack_3f;
  byte bStack_3e;
  undefined8 local_38;
  undefined8 local_30;
  double local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = DAT_0064781c;
  if (param_2 != 1) {
    uVar1 = DAT_00647818;
  }
  uVar4 = 0;
  local_30 = (double)(ulonglong)(uVar1 / 1000);
  local_38 = (double)(longlong)local_30 * _DAT_0061a6e0;
  local_30 = (double)(ulonglong)(uVar1 % 1000);
  local_30 = (double)(longlong)local_30 * _DAT_0061a6e0;
  if (_DAT_006106d0 <= local_38) {
    local_38 = 1.0;
  }
  if (_DAT_006106d0 <= local_30) {
    local_30 = 1.0;
  }
  do {
    local_1c = local_38._4_4_;
    local_18 = (undefined4)local_30;
    local_20 = (undefined4)local_38;
    local_28 = (double)(byte)(&DAT_0061a6d8)[uVar4] * _DAT_0061a6e0;
    local_10 = 0;
    local_c = 0x3ff00000;
    local_14 = local_30._4_4_;
    _SFHSL_To_SFRGBA_8(&local_40,&local_28);
    uVar1 = ((uint)local_40 << 8 | CONCAT11(bStack_3e,cStack_3f) & 0xff) << 8 | (uint)bStack_3e;
    (&DAT_0063e314)[uVar4] = uVar1;
    uVar2 = FUN_00460550(uVar1,8);
    (&DAT_0064bf58)[uVar4] = uVar2;
    iVar3 = (0xff - (uint)bStack_3e) * 0x5a;
    bStack_3e = bStack_3e + (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8);
    iVar3 = (0xff - (CONCAT11(bStack_3e,cStack_3f) & 0xff)) * 0x5a;
    cStack_3f = cStack_3f + (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8);
    iVar3 = (0xff - (CONCAT12(bStack_3e,CONCAT11(cStack_3f,local_40)) & 0xff)) * 0x5a;
    local_40 = local_40 + (char)((iVar3 >> 0x1f & 0xffU) + iVar3 >> 8);
    (&DAT_0064bf48)[uVar4] =
         ((uint)local_40 << 8 | CONCAT11(bStack_3e,cStack_3f) & 0xff) << 8 | (uint)bStack_3e;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  return;
}


