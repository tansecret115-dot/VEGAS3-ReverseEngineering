/* Module: vidcap30.exe
   Function: FUN_00462dc0
   Address: 00462dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_00462dc0(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  int local_4;
  
  iVar1 = FUN_00462d70(&local_4);
  if (iVar1 != 0) {
    switch(param_1) {
    case 0:
      puVar2 = (&PTR_s_Video_Capture_005b646c)[local_4 * 0x20];
      break;
    case 1:
      puVar2 = (&PTR_s_Sonic_Foundry_Video_Capture_3_0_0058c535_3_005b6468)[local_4 * 0x20];
      break;
    case 2:
      puVar2 = (&PTR_s_VidCap_005b6484)[local_4 * 0x20];
      break;
    case 3:
      puVar2 = &DAT_005b6474 + local_4 * 0x80;
      break;
    default:
      goto switchD_00462dd8_default;
    }
    if (puVar2 != (undefined *)0x0) {
      return puVar2;
    }
  }
switchD_00462dd8_default:
  return &DAT_005bc40c;
}


