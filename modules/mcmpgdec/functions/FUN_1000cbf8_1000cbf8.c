/* Module: mcmpgdec.dll
   Function: FUN_1000cbf8
   Address: 1000cbf8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000cbf8(uint *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  uint *local_14;
  
  uVar12 = FUN_10004a58();
  local_14 = (uint *)param_1[4];
  uVar1 = param_1[8];
  uVar2 = param_1[2];
  cVar4 = (char)uVar12;
  if (uVar2 != 0x34524742) {
    if (uVar2 < 0x34524743) {
      if (uVar2 == 0x32315659) {
        puVar10 = (undefined8 *)*param_2;
        puVar9 = (undefined8 *)param_2[2];
        puVar8 = (undefined8 *)param_2[1];
      }
      else {
        if (0x32315659 < uVar2) {
          if (uVar2 != 0x32595559) {
            if (uVar2 != 0x33524742) {
              return;
            }
            if (param_3 != 1) {
              if (param_3 != 2) {
                return;
              }
              if ((uVar12 & 0x300) != 0) {
                FUN_10022018(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
                return;
              }
              if (cVar4 < '\0') {
                FUN_1001c018(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
                return;
              }
              FUN_10010d7c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
              return;
            }
            if (param_4 != 0) {
              if ((uVar12 & 0x300) != 0) {
                FUN_1002128c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
                return;
              }
              if (cVar4 < '\0') {
                FUN_1001b28c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
                return;
              }
              FUN_10010014(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
              return;
            }
            if ((uVar12 & 0x300) != 0) {
              FUN_100218f8(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
              return;
            }
            if (cVar4 < '\0') {
              FUN_1001b8f8(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
              return;
            }
            FUN_1001065c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
            return;
          }
          goto LAB_1000d0d8;
        }
        if (uVar2 != 0x30323449) {
          return;
        }
        puVar10 = (undefined8 *)*param_2;
        puVar9 = (undefined8 *)param_2[1];
        puVar8 = (undefined8 *)param_2[2];
      }
      uVar3 = *param_1;
      uVar2 = param_1[1];
      uVar5 = uVar2;
      do {
        FUN_1000dd34((undefined1 *)local_14,puVar10,uVar3);
        puVar10 = (undefined8 *)((int)puVar10 + param_5);
        local_14 = (uint *)((int)local_14 + uVar1);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      iVar7 = (int)uVar2 >> 1;
      uVar3 = (int)uVar3 >> 1;
      iVar11 = param_5 >> 1;
      if (param_3 == 1) {
        local_14 = (uint *)param_1[5];
        uVar1 = param_1[9];
        iVar6 = iVar7;
        do {
          FUN_1000dd34((undefined1 *)local_14,puVar9,uVar3);
          local_14 = (uint *)((int)local_14 + uVar1);
          iVar6 = iVar6 + -1;
          puVar9 = (undefined8 *)((int)puVar9 + iVar11);
        } while (iVar6 != 0);
        local_14 = (uint *)param_1[6];
        uVar1 = param_1[10];
        do {
          FUN_1000dd34((undefined1 *)local_14,puVar8,uVar3);
          local_14 = (uint *)((int)local_14 + uVar1);
          iVar7 = iVar7 + -1;
          puVar8 = (undefined8 *)((int)puVar8 + iVar11);
        } while (iVar7 != 0);
        return;
      }
      if (param_3 != 2) {
        return;
      }
      local_14 = (uint *)param_1[5];
      uVar1 = param_1[9];
      if (param_4 != 0) {
        iVar6 = iVar7;
        do {
          FUN_1000dd34((undefined1 *)local_14,puVar9,uVar3);
          puVar9 = (undefined8 *)((int)puVar9 + iVar11 * 2);
          local_14 = (uint *)((int)local_14 + uVar1);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        local_14 = (uint *)param_1[6];
        uVar1 = param_1[10];
        do {
          FUN_1000dd34((undefined1 *)local_14,puVar8,uVar3);
          puVar8 = (undefined8 *)((int)puVar8 + iVar11 * 2);
          local_14 = (uint *)((int)local_14 + uVar1);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        return;
      }
      iVar6 = (int)uVar2 >> 2;
      iVar7 = iVar6;
      do {
        puVar10 = (undefined8 *)((int)puVar9 + iVar11);
        FUN_1000dd34((undefined1 *)local_14,puVar9,uVar3);
        puVar9 = (undefined8 *)((int)puVar10 + iVar11 * 3);
        FUN_1000dd34((undefined1 *)((int)local_14 + uVar1),puVar10,uVar3);
        local_14 = (uint *)((undefined1 *)((int)local_14 + uVar1) + uVar1);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      local_14 = (uint *)param_1[6];
      uVar1 = param_1[10];
      do {
        puVar10 = (undefined8 *)((int)puVar8 + iVar11);
        FUN_1000dd34((undefined1 *)local_14,puVar8,uVar3);
        puVar8 = (undefined8 *)((int)puVar10 + iVar11 * 3);
        FUN_1000dd34((undefined1 *)((int)local_14 + uVar1),puVar10,uVar3);
        local_14 = (uint *)((undefined1 *)((int)local_14 + uVar1) + uVar1);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return;
    }
    if (uVar2 != 0x41524742) {
      if (uVar2 < 0x41524743) {
        if (uVar2 == 0x35353552) {
          if (param_3 != 1) {
            if (param_3 != 2) {
              return;
            }
            if ((uVar12 & 0x300) != 0) {
              FUN_10024e8c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
              return;
            }
            if (cVar4 < '\0') {
              FUN_1001ee8c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
              return;
            }
            FUN_1001670c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
            return;
          }
          if (param_4 != 0) {
            if ((uVar12 & 0x300) != 0) {
              FUN_10023c5c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
              return;
            }
            if (cVar4 < '\0') {
              FUN_1001dc5c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
              return;
            }
            FUN_10015500(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
            return;
          }
          if ((uVar12 & 0x300) != 0) {
            FUN_1002453c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
            return;
          }
          if (cVar4 < '\0') {
            FUN_1001e53c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
            return;
          }
          FUN_10015dcc(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
          return;
        }
        if (uVar2 != 0x35363552) {
          return;
        }
        if (param_3 != 1) {
          if (param_3 != 2) {
            return;
          }
          if ((uVar12 & 0x300) != 0) {
            FUN_1002370c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
            return;
          }
          if (cVar4 < '\0') {
            FUN_1001d70c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
            return;
          }
          FUN_1001356c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
          return;
        }
        if (param_4 != 0) {
          if ((uVar12 & 0x300) != 0) {
            FUN_100223dc(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
            return;
          }
          if (cVar4 < '\0') {
            FUN_1001c3dc(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
            return;
          }
          FUN_1001225c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
          return;
        }
        if ((uVar12 & 0x300) != 0) {
          FUN_10022d3c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
          return;
        }
        if (cVar4 < '\0') {
          FUN_1001cd3c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
          return;
        }
        FUN_10012ba8(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
        return;
      }
      if (uVar2 != 0x56595559) {
        if (uVar2 != 0x59565955) {
          return;
        }
        if (param_3 != 1) {
          if (param_3 != 2) {
            return;
          }
          if ((uVar12 & 0x300) != 0) {
            FUN_1002635c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
            return;
          }
          if (cVar4 < '\0') {
            FUN_1002035c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
            return;
          }
          FUN_10019b9c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
          return;
        }
        if (param_4 != 0) {
          if ((uVar12 & 0x300) != 0) {
            FUN_10025c5c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
            return;
          }
          if (cVar4 < '\0') {
            FUN_1001fc5c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
            return;
          }
          FUN_100194b4(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
          return;
        }
        if ((uVar12 & 0x300) != 0) {
          FUN_10025f9c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
          return;
        }
        if (cVar4 < '\0') {
          FUN_1001ff9c(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
          return;
        }
        FUN_100197ec(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
        return;
      }
LAB_1000d0d8:
      if (param_3 != 1) {
        if (param_3 != 2) {
          return;
        }
        if ((uVar12 & 0x300) != 0) {
          FUN_10025a64(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
          return;
        }
        if (cVar4 < '\0') {
          FUN_1001fa64(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
          return;
        }
        FUN_10018b44(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
        return;
      }
      if (param_4 != 0) {
        if ((uVar12 & 0x300) != 0) {
          FUN_10025390(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
          return;
        }
        if (cVar4 < '\0') {
          FUN_1001f390(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
          return;
        }
        FUN_10018494(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
        return;
      }
      if ((uVar12 & 0x300) != 0) {
        FUN_100256b8(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
        return;
      }
      if (cVar4 < '\0') {
        FUN_1001f6b8(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
        return;
      }
      FUN_100187ac(local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
      return;
    }
  }
  if (param_3 == 1) {
    if (param_4 == 0) {
      if ((uVar12 & 0x300) == 0) {
        if (cVar4 < '\0') {
          FUN_1001aa38((undefined8 *)local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
        }
        else {
          FUN_1000eb58((undefined8 *)local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
        }
      }
      else {
        FUN_10020a3c((undefined8 *)local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
      }
    }
    else if ((uVar12 & 0x300) == 0) {
      if (cVar4 < '\0') {
        FUN_1001a554((undefined8 *)local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
      }
      else {
        FUN_1000e688((undefined8 *)local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
      }
    }
    else {
      FUN_1002055c((undefined8 *)local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
    }
  }
  else if (param_3 == 2) {
    if ((uVar12 & 0x300) == 0) {
      if (cVar4 < '\0') {
        FUN_1001af84((undefined8 *)local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
      }
      else {
        FUN_1000f094((undefined8 *)local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
      }
    }
    else {
      FUN_10020f84((undefined8 *)local_14,uVar1,param_5,param_2,*param_1,param_1[1]);
    }
  }
  return;
}


