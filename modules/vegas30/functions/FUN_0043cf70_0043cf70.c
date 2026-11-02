/* Module: vegas30.exe
   Function: FUN_0043cf70
   Address: 0043cf70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_0043cf70(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  int local_4;
  
  iVar1 = FUN_0043ce40(&local_4);
  if (iVar1 != 0) {
    switch(param_1) {
    case 0:
      puVar2 = (&PTR_s_Vegas_Video_0063dcf4)[local_4 * 0x1b];
      break;
    case 1:
      puVar2 = (&PTR_s_Sonic_Foundry_Vegas_Video_3_0_0063dcf0)[local_4 * 0x1b];
      break;
    case 2:
      puVar2 = (&PTR_s_vegasvideo_0063dd08)[local_4 * 0x1b];
      break;
    case 3:
      puVar2 = (&PTR_s_0x4040_0063dd00)[local_4 * 0x1b];
      break;
    default:
      goto switchD_0043cf88_default;
    }
    if (puVar2 != (undefined *)0x0) {
      return puVar2;
    }
  }
switchD_0043cf88_default:
  return &DAT_0064bc84;
}


