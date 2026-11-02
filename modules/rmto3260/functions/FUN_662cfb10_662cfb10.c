/* Module: rmto3260.dll
   Function: FUN_662cfb10
   Address: 662cfb10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662cfb10(void *this,byte *param_1,undefined1 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  ushort local_c;
  
  pcVar4 = s_RMFF_1_0_Flags_6630a194;
  do {
    bVar1 = *param_1;
    bVar8 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_662cfb49:
      iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_662cfb4e;
    }
    if (bVar1 == 0) break;
    bVar1 = param_1[1];
    bVar8 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_662cfb49;
    param_1 = param_1 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_662cfb4e:
  if (iVar2 != 0) {
    FUN_662f0810(*(int **)((int)this + 0x28),s_Unknown_buffer_format_for__s_pro_6630a750);
    return 0;
  }
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    pbVar6 = param_2 + 1;
    local_c = CONCAT11(*param_2,*pbVar6);
    uVar7 = (uint)local_c;
    puVar3 = operator_new(uVar7 * 2);
    if (local_c != 0) {
      do {
        pbVar5 = pbVar6 + 1;
        pbVar6 = pbVar6 + 2;
        *puVar3 = (ushort)*pbVar5 << 8;
        *puVar3 = *puVar3 | (ushort)*pbVar6;
        uVar7 = uVar7 - 1;
        puVar3 = puVar3 + 1;
      } while (uVar7 != 0);
    }
  }
  if (local_c != 0) {
    uVar7 = (uint)local_c;
    do {
      FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a700);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a1a4);
  return 0;
}


