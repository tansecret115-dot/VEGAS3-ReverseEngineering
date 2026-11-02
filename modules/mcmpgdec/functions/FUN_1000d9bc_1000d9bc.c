/* Module: mcmpgdec.dll
   Function: FUN_1000d9bc
   Address: 1000d9bc
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000d9bc(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 == 0x34524742) {
LAB_1000db38:
    if (param_3 == 1) {
      if (param_4 == 0) {
        *(undefined1 **)(param_1 + 8) = &LAB_1000f710;
      }
      else {
        *(undefined1 **)(param_1 + 8) = &LAB_1000f390;
      }
    }
    else if (param_3 == 2) {
      *(undefined1 **)(param_1 + 8) = &LAB_1000fde0;
    }
  }
  else {
    if (uVar1 < 0x34524743) {
      if (uVar1 == 0x32315659) {
        if (param_3 != 1) {
          return;
        }
        *(undefined1 **)(param_1 + 8) = &LAB_1000dbc8;
        return;
      }
      if (uVar1 < 0x3231565a) {
        if (uVar1 != 0x30323449) {
          return;
        }
        if (param_3 != 1) {
          return;
        }
        *(code **)(param_1 + 8) = FUN_1000dc78;
        return;
      }
      if (uVar1 != 0x32595559) {
        if (uVar1 != 0x33524742) {
          return;
        }
        if (param_3 == 1) {
          if (param_4 != 0) {
            *(undefined1 **)(param_1 + 8) = &LAB_1001113c;
            return;
          }
          *(undefined1 **)(param_1 + 8) = &LAB_10011610;
          return;
        }
        if (param_3 != 2) {
          return;
        }
        *(undefined1 **)(param_1 + 8) = &LAB_10011f80;
        return;
      }
    }
    else {
      if (uVar1 == 0x41524742) goto LAB_1000db38;
      if (uVar1 < 0x41524743) {
        if (uVar1 == 0x35353552) {
          if (param_3 != 1) {
            if (param_3 != 2) {
              return;
            }
            *(undefined1 **)(param_1 + 8) = &LAB_100180a0;
            return;
          }
          if (param_4 != 0) {
            *(undefined1 **)(param_1 + 8) = &LAB_10016c04;
            return;
          }
          *(undefined1 **)(param_1 + 8) = &LAB_100172f8;
          return;
        }
        if (uVar1 != 0x35363552) {
          return;
        }
        if (param_3 == 1) {
          if (param_4 != 0) {
            *(undefined1 **)(param_1 + 8) = &LAB_10013aac;
            return;
          }
          *(undefined1 **)(param_1 + 8) = &LAB_10014220;
          return;
        }
        if (param_3 != 2) {
          return;
        }
        *(undefined1 **)(param_1 + 8) = &LAB_100150d4;
        return;
      }
      if (uVar1 != 0x56595559) {
        if (uVar1 != 0x59565955) {
          return;
        }
        if (param_3 == 1) {
          if (param_4 != 0) {
            *(undefined1 **)(param_1 + 8) = &LAB_10019d90;
            return;
          }
          *(undefined1 **)(param_1 + 8) = &LAB_10019fc8;
          return;
        }
        if (param_3 != 2) {
          return;
        }
        *(undefined1 **)(param_1 + 8) = &LAB_1001a3ec;
        return;
      }
    }
    if (param_3 == 1) {
      if (param_4 == 0) {
        *(undefined1 **)(param_1 + 8) = &LAB_10018f50;
      }
      else {
        *(undefined1 **)(param_1 + 8) = &LAB_10018d30;
      }
    }
    else if (param_3 == 2) {
      *(code **)(param_1 + 8) = FUN_10019348;
    }
  }
  return;
}


