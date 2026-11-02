/* Module: vegas30k.dll
   Function: FUN_010e5670
   Address: 010e5670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010e5670(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_d4;
  code *local_d0;
  int local_c4;
  undefined1 local_c0 [4];
  undefined1 local_bc [8];
  code *pcStack_b4;
  code *local_b0;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int local_30;
  int local_2c;
  
  iVar1 = param_1[0x1b];
  local_d4 = param_1[7];
  local_c4 = param_1[0xf];
  iVar5 = param_1[0x13];
  uVar3 = _SfGetPixelType_4(param_1[0x11]);
  uVar4 = _SfGetPixelType_4(param_1[5]);
  _SfGetPixelBitsPerChannel_8(uVar3,local_c0);
  _SfGetPixelBitsPerChannel_8(uVar4,local_c0);
  _SfXCHGGetFunctionPointers_20(uVar4,uVar3,param_1[0x22],local_bc,0);
  local_30 = param_1[0x1c];
  local_2c = param_1[0x10];
  if (*param_1 == 0) {
    iVar2 = param_1[0x19];
    local_d0 = (code *)param_1[0x1a];
    if (0 < (int)local_d0) {
      do {
        local_58 = local_d4;
        local_5c = 0;
        local_54 = 0;
        iVar6 = iVar2;
        local_60 = iVar5;
        if (0 < iVar2) {
          do {
            (*local_b0)(local_bc);
            (*local_d0)(local_c0);
            (*pcStack_b4)(&local_c4);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar5 = iVar5 + iVar1;
        local_d4 = local_d4 + local_c4;
        local_d0 = local_d0 + -1;
      } while (local_d0 != (code *)0x0);
    }
  }
  return 0;
}


