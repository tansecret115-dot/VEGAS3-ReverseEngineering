/* Module: vegas30.exe
   Function: FUN_004eb4e0
   Address: 004eb4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004eb4e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  undefined4 local_450;
  undefined4 local_44c;
  undefined1 local_448 [260];
  uchar local_344 [260];
  uchar local_240 [520];
  int local_38 [3];
  undefined4 local_2c;
  
  local_44c = 0;
  iVar1 = _SfZipEnum_Create_8(param_1,&local_44c);
  if (-1 < iVar1) {
    local_450 = 0;
    do {
      iVar1 = _SfZipEnum_NextSafe_12(param_1,local_44c,local_448);
      if (iVar1 < 0) break;
      SfPrintF(local_344,&DAT_00610364,param_2,local_448);
      iVar1 = _SfDoesFileExist_4(local_344);
      if (iVar1 == 0) {
LAB_004eb587:
        iVar1 = _SfZip_ExtractFile_20(param_1,local_448,local_344,0,0);
        if (iVar1 < 0) break;
      }
      else {
        iVar1 = SfMsgBox(DAT_00647624,0x124,"%s already exists.\nDo you want to overwrite?",
                         local_448,param_2);
        if (iVar1 != 7) goto LAB_004eb587;
        iVar1 = 0;
      }
      puVar3 = local_240;
      for (iVar2 = 0x90; iVar2 != 0; iVar2 = iVar2 + -1) {
        puVar3[0] = '\0';
        puVar3[1] = '\0';
        puVar3[2] = '\0';
        puVar3[3] = '\0';
        puVar3 = puVar3 + 4;
      }
      _mbscpy(local_240,local_344);
      local_2c = FUN_004ebc10(local_240,local_38,local_240);
      if (local_38[0] == 6) {
        FUN_004ec280(&local_450,local_240,0,0,0,0xffffffff,0xffffffff,0,0xffffffff,0,0,0);
      }
    } while (-1 < iVar1);
    iVar1 = FUN_004ec630(local_450,0,0,0);
    FUN_004ec820(local_450);
    _SfZipEnum_Destroy_4(local_44c);
  }
  return iVar1;
}


