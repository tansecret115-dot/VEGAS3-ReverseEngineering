/* Module: dsetup.dll
   Function: FUN_0040198b
   Address: 0040198b
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040198b(byte *param_1,uint *param_2)

{
  byte *pbVar1;
  void *this;
  void *this_00;
  void *this_01;
  int iVar2;
  int iVar3;
  undefined *this_02;
  uint local_c;
  uint local_8;
  
  this_02 = &DAT_004011cc;
  iVar3 = 0;
  iVar2 = 0;
  local_8 = 0;
  local_c = 0;
  pbVar1 = (byte *)FUN_00402f8f(param_1,&DAT_004011cc);
  if (pbVar1 != (byte *)0x0) {
    iVar2 = FUN_00402f84(this_02,pbVar1);
    pbVar1 = (byte *)FUN_00402f8f((byte *)0x0,&DAT_004011cc);
    if (pbVar1 != (byte *)0x0) {
      local_8 = FUN_00402f84(this,pbVar1);
      pbVar1 = (byte *)FUN_00402f8f((byte *)0x0,&DAT_004011cc);
      if (pbVar1 != (byte *)0x0) {
        iVar3 = FUN_00402f84(this_00,pbVar1);
        pbVar1 = (byte *)FUN_00402f8f((byte *)0x0,&DAT_004011cc);
        if (pbVar1 != (byte *)0x0) {
          local_c = FUN_00402f84(this_01,pbVar1);
        }
      }
    }
  }
  param_2[1] = iVar3 << 0x10 | local_c & 0xffff;
  *param_2 = iVar2 << 0x10 | local_8 & 0xffff;
  return;
}


