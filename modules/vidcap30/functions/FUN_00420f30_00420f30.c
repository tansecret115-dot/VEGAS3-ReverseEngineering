/* Module: vidcap30.exe
   Function: FUN_00420f30
   Address: 00420f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00420f30(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  HANDLE h;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  param_3[1] = param_1;
  param_3[0x4e] = 0;
  param_3[0x4f] = 0;
  if (param_4 == 1) {
    *param_3 = 1;
    param_3[4] = 0x20;
    param_3[3] = 0x10000201;
    param_3[2] = 0;
    uVar1 = FUN_00421190(param_3 + 10,param_2,2,6);
    *(undefined8 *)(param_3 + 0x4b) = uVar1;
    param_3[0x4e] = param_3[0x4e] | 4;
    param_3[0x50] = param_3[0x50] | 1;
    param_3[0x51] = param_3[0x51];
    param_3[0x58] = param_3[0x5c];
    param_3[0x59] = param_3[0x5d];
    param_3[0x4f] = param_3[0x4f];
    if ((int)param_3[0x5b] < param_3[0x4c] + 2) {
      param_3[0x5b] = param_3[0x4c] + 2;
      FUN_00421b10(param_3,param_2,0);
      return 0;
    }
  }
  else {
    if (param_4 == 2) {
      *param_3 = 2;
      param_3[2] = 0;
      if (((byte)param_3[3] & 0xe) == 0xe) {
        h = (HANDLE)_SfLoadBitmap_8(DAT_005ba2a0,*(undefined2 *)(param_3 + 9));
        param_3[0x25b] = h;
        GetObjectA(h,0x18,local_18);
        param_3[0xdc] = local_14;
        param_3[0xdd] = local_10;
      }
      uVar2 = 2;
    }
    else if (param_4 == 3) {
      uVar2 = 2;
      *param_3 = 3;
      param_3[2] = 0;
    }
    else {
      if (param_4 != 4) {
        if (param_4 == 5) {
          *param_3 = 5;
          param_3[2] = 0;
          param_3[0x4e] = 0xc;
        }
        else {
          if (param_4 == 6) {
            param_3[0x4e] = 0xc;
            *param_3 = 6;
            param_3[2] = 0;
            param_3[0x4f] = 0;
            FUN_00421b10(param_3,param_2,0);
            return 0;
          }
          if (param_4 == 7) {
            *param_3 = 7;
            param_3[0x4e] = 4;
            param_3[2] = 0;
            param_3[0x4f] = 0;
            FUN_00421b10(param_3,param_2,0);
            return 0;
          }
          if (param_4 != 8) {
            return 0;
          }
          *param_3 = 8;
          param_3[2] = 0;
          param_3[0x4e] = 4;
        }
        param_3[0x4f] = 0;
        FUN_00421b10(param_3,param_2,0);
        return 0;
      }
      *param_3 = 4;
      param_3[2] = 0;
      uVar2 = 4;
    }
    uVar1 = FUN_00421190(param_3 + 10,param_2,uVar2,6);
    *(undefined8 *)(param_3 + 0x4b) = uVar1;
    param_3[0x4e] = param_3[0x4e] | 4;
    param_3[0x4f] = param_3[0x4f];
  }
  FUN_00421b10(param_3,param_2,0);
  return 0;
}


