/* Module: vegas30k.dll
   Function: FUN_01067cc0
   Address: 01067cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0106808a) */
/* WARNING: Removing unreachable block (ram,0x01067e7d) */

void FUN_01067cc0(int param_1,uint param_2,int param_3,int param_4,int param_5,byte param_6,
                 byte param_7,byte param_8,byte param_9)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  byte local_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (param_5 < 0x400) {
      *(undefined4 *)(param_4 + 0x5c) = *(undefined4 *)(param_3 + 100);
      *(undefined4 *)(param_4 + 0x60) = *(undefined4 *)(param_3 + 0x68);
      (**(code **)(param_4 + 0xc))(param_4);
      param_5 = 0x400 - param_5;
      *(byte *)(param_3 + 0x3e) = (char)((uint)*(byte *)(param_4 + 0x3e) * param_5 >> 10) + param_6;
      *(byte *)(param_3 + 0x3d) = (char)((uint)*(byte *)(param_4 + 0x3d) * param_5 >> 10) + param_7;
      *(byte *)(param_3 + 0x3c) = (char)((uint)*(byte *)(param_4 + 0x3c) * param_5 >> 10) + param_8;
      *(byte *)(param_3 + 0x3f) = (char)((uint)*(byte *)(param_4 + 0x3f) * param_5 >> 10) + param_9;
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    }
    *(byte *)(param_3 + 0x3e) = param_6;
    *(byte *)(param_3 + 0x3d) = param_7;
    *(byte *)(param_3 + 0x3c) = param_8;
    *(byte *)(param_3 + 0x3f) = param_9;
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  bStack_b = param_7;
  local_c = param_8;
  bStack_a = param_6;
  *(undefined4 *)(param_4 + 0x5c) = *(undefined4 *)(param_3 + 100);
  bStack_9 = param_9;
  *(undefined4 *)(param_4 + 0x60) = *(undefined4 *)(param_3 + 0x68);
  (**(code **)(param_4 + 0xc))(param_4);
  pbVar1 = (byte *)(param_3 + 0x3c);
  *(undefined4 *)pbVar1 = *(undefined4 *)(param_4 + 0x3c);
  if ((param_2 == 0x4000) && (0x3ff < param_5)) {
    *(undefined4 *)pbVar1 = *(undefined4 *)(param_4 + 0x3c);
    switch(*(undefined4 *)(param_1 + 4)) {
    case 1:
      uVar3 = (CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)) & 0xff) + (uint)*pbVar1;
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      else if (0xff < uVar3) {
        uVar3 = 0xff;
      }
      *pbVar1 = (byte)uVar3;
      uVar3 = (CONCAT12(bStack_9,CONCAT11(bStack_a,bStack_b)) & 0xff) +
              (uint)*(byte *)(param_3 + 0x3d);
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      else if (0xff < uVar3) {
        uVar3 = 0xff;
      }
      *(char *)(param_3 + 0x3d) = (char)uVar3;
      uVar3 = (uint)*(byte *)(param_3 + 0x3e) + (CONCAT11(bStack_9,bStack_a) & 0xff);
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      else if (0xff < uVar3) {
        uVar3 = 0xff;
      }
      *(char *)(param_3 + 0x3e) = (char)uVar3;
      iVar4 = (uint)*(byte *)(param_3 + 0x3f) + (uint)bStack_9;
      goto LAB_01068705;
    case 2:
      iVar4 = (uint)*pbVar1 - (CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)) & 0xff);
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xff < iVar4) {
        iVar4 = 0xff;
      }
      *pbVar1 = (byte)iVar4;
      iVar4 = (uint)*(byte *)(param_3 + 0x3d) -
              (CONCAT12(bStack_9,CONCAT11(bStack_a,bStack_b)) & 0xff);
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xff < iVar4) {
        iVar4 = 0xff;
      }
      *(char *)(param_3 + 0x3d) = (char)iVar4;
      iVar4 = (uint)*(byte *)(param_3 + 0x3e) - (CONCAT11(bStack_9,bStack_a) & 0xff);
      if (iVar4 < 0) {
        *(undefined1 *)(param_3 + 0x3e) = 0;
        (**(code **)(param_3 + 0x10))(param_3);
        return;
      }
      goto LAB_010684a2;
    case 3:
      *pbVar1 = (byte)(((CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)) & 0xff) * (uint)*pbVar1) /
                      0xff);
      *(char *)(param_3 + 0x3d) =
           (char)(((uint)*(byte *)(param_3 + 0x3d) *
                  (CONCAT12(bStack_9,CONCAT11(bStack_a,bStack_b)) & 0xff)) / 0xff);
      *(char *)(param_3 + 0x3e) =
           (char)(((uint)*(byte *)(param_3 + 0x3e) * (CONCAT11(bStack_9,bStack_a) & 0xff)) / 0xff);
      *(char *)(param_3 + 0x3f) = (char)(((uint)*(byte *)(param_3 + 0x3f) * (uint)bStack_9) / 0xff);
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    case 4:
      if (bStack_9 == 0xff) {
        *(uint *)pbVar1 = CONCAT13(0xff,CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)));
        (**(code **)(param_3 + 0x10))(param_3);
        return;
      }
      if (bStack_9 != 0) {
        iVar7 = 0xff - (uint)bStack_9;
        iVar4 = (uint)*pbVar1 * iVar7 + 0x7f;
        iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0xffU)) >> 8) +
                (CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)) & 0xff);
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        else if (0xff < iVar4) {
          iVar4 = 0xff;
        }
        *pbVar1 = (byte)iVar4;
        iVar4 = (uint)*(byte *)(param_3 + 0x3d) * iVar7 + 0x7f;
        iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0xffU)) >> 8) +
                (CONCAT12(bStack_9,CONCAT11(bStack_a,bStack_b)) & 0xff);
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        else if (0xff < iVar4) {
          iVar4 = 0xff;
        }
        *(char *)(param_3 + 0x3d) = (char)iVar4;
        iVar4 = (uint)*(byte *)(param_3 + 0x3e) * iVar7 + 0x7f;
        iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0xffU)) >> 8) + (CONCAT11(bStack_9,bStack_a) & 0xff)
        ;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        else if (0xff < iVar4) {
          iVar4 = 0xff;
        }
        *(char *)(param_3 + 0x3e) = (char)iVar4;
        iVar4 = (uint)*(byte *)(param_3 + 0x3f) + (uint)bStack_9;
        goto LAB_01068705;
      }
      break;
    case 5:
      iVar4 = 0xff - (uint)bStack_9;
      if (iVar4 == 0) {
        param_2 = CONCAT31(0x40,*pbVar1);
      }
      else {
        iVar7 = (int)((CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)) & 0xff) * 0xff) / iVar4;
        param_2 = CONCAT31(0x40,(char)iVar7);
        if (0xfe < iVar7) {
          param_2 = 0x40ff;
        }
      }
      sVar6 = (short)iVar4;
      iVar7 = ((param_2 & 0xff) - (uint)*pbVar1) * (int)sVar6;
      *pbVar1 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *pbVar1;
      if (iVar4 == 0) {
        param_2 = (uint)*(byte *)(param_3 + 0x3d);
      }
      else {
        uVar3 = (int)((CONCAT12(bStack_9,CONCAT11(bStack_a,bStack_b)) & 0xff) * 0xff) / iVar4;
        param_2 = uVar3 & 0xff;
        if (0xfe < (int)uVar3) {
          param_2 = 0xff;
        }
      }
      iVar7 = (param_2 - *(byte *)(param_3 + 0x3d)) * (int)sVar6;
      *(byte *)(param_3 + 0x3d) =
           (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_3 + 0x3d);
      if (iVar4 == 0) {
        param_2 = (uint)*(byte *)(param_3 + 0x3e);
      }
      else {
        uVar3 = (int)((CONCAT11(bStack_9,bStack_a) & 0xff) * 0xff) / iVar4;
        param_2 = uVar3 & 0xff;
        if (0xfe < (int)uVar3) {
          param_2 = 0xff;
        }
      }
      iVar7 = (param_2 - *(byte *)(param_3 + 0x3e)) * (int)sVar6;
      *(byte *)(param_3 + 0x3e) =
           (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_3 + 0x3e);
      iVar4 = iVar4 + (uint)*(byte *)(param_3 + 0x3f);
      if (iVar4 < 0) {
        *(undefined1 *)(param_3 + 0x3f) = 0;
        (**(code **)(param_3 + 0x10))(param_3);
        return;
      }
      goto LAB_01068873;
    case 0xc:
      if ((bStack_9 != 0) && (*(char *)(param_3 + 0x3f) != '\0')) {
        iVar7 = 0xff - (uint)bStack_9;
        iVar4 = (int)(((uint)*pbVar1 + (CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)) & 0xff)) *
                     iVar7) / 0xff;
        if (iVar4 < 0) {
          bVar2 = 0;
        }
        else {
          bVar2 = *(byte *)(param_3 + 0x3f);
          if (iVar4 <= (int)(uint)bVar2) {
            bVar2 = (byte)iVar4;
          }
        }
        *pbVar1 = bVar2;
        iVar4 = (int)(((uint)*(byte *)(param_3 + 0x3d) +
                      (CONCAT12(bStack_9,CONCAT11(bStack_a,bStack_b)) & 0xff)) * iVar7) / 0xff;
        if (iVar4 < 0) {
          bVar2 = 0;
        }
        else {
          bVar2 = *(byte *)(param_3 + 0x3f);
          if (iVar4 <= (int)(uint)bVar2) {
            bVar2 = (byte)iVar4;
          }
        }
        *(byte *)(param_3 + 0x3d) = bVar2;
        iVar4 = (int)(((uint)*(byte *)(param_3 + 0x3e) + (CONCAT11(bStack_9,bStack_a) & 0xff)) *
                     iVar7) / 0xff;
        if (iVar4 < 0) {
          *(undefined1 *)(param_3 + 0x3e) = 0;
          (**(code **)(param_3 + 0x10))(param_3);
          return;
        }
        bVar2 = *(byte *)(param_3 + 0x3f);
        if (iVar4 <= (int)(uint)bVar2) {
          bVar2 = (byte)iVar4;
        }
        *(byte *)(param_3 + 0x3e) = bVar2;
        (**(code **)(param_3 + 0x10))(param_3);
        return;
      }
      break;
    case 0xffffffff:
      (*(code *)**(undefined4 **)(param_1 + 0xc))(pbVar1,&local_c,0xff);
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    }
    goto switchD_01067dec_caseD_0;
  }
  iVar4 = (int)(param_5 * 0x4000 + (param_5 * 0x4000 >> 0x1f & 0x3ffU)) >> 10;
  switch(*(undefined4 *)(param_1 + 4)) {
  case 1:
    uVar3 = (uint)((longlong)iVar4 * (longlong)(int)param_2) >> 0xe |
            (int)((ulonglong)((longlong)iVar4 * (longlong)(int)param_2) >> 0x20) << 0x12;
    iVar4 = (CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)) & 0xff) * uVar3;
    iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe) + (uint)*pbVar1;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xff < iVar4) {
      iVar4 = 0xff;
    }
    *pbVar1 = (byte)iVar4;
    iVar4 = (CONCAT12(bStack_9,CONCAT11(bStack_a,bStack_b)) & 0xff) * uVar3;
    iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe) + (uint)*(byte *)(param_3 + 0x3d);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xff < iVar4) {
      iVar4 = 0xff;
    }
    *(char *)(param_3 + 0x3d) = (char)iVar4;
    iVar4 = (CONCAT11(bStack_9,bStack_a) & 0xff) * uVar3;
    iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe) + (uint)*(byte *)(param_3 + 0x3e);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xff < iVar4) {
      iVar4 = 0xff;
    }
    *(char *)(param_3 + 0x3e) = (char)iVar4;
    iVar4 = ((int)(bStack_9 * uVar3 + ((int)(bStack_9 * uVar3) >> 0x1f & 0x3fffU)) >> 0xe) +
            (uint)*(byte *)(param_3 + 0x3f);
    if (iVar4 < 0) {
      *(undefined1 *)(param_3 + 0x3f) = 0;
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    }
    goto LAB_01068705;
  case 2:
    uVar3 = (uint)((longlong)iVar4 * (longlong)(int)param_2) >> 0xe |
            (int)((ulonglong)((longlong)iVar4 * (longlong)(int)param_2) >> 0x20) << 0x12;
    iVar4 = (CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)) & 0xff) * uVar3;
    iVar4 = (uint)*pbVar1 - ((int)((iVar4 >> 0x1f & 0x3fffU) + iVar4) >> 0xe);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xff < iVar4) {
      iVar4 = 0xff;
    }
    *pbVar1 = (byte)iVar4;
    iVar4 = (CONCAT12(bStack_9,CONCAT11(bStack_a,bStack_b)) & 0xff) * uVar3;
    iVar4 = (uint)*(byte *)(param_3 + 0x3d) - ((int)((iVar4 >> 0x1f & 0x3fffU) + iVar4) >> 0xe);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xff < iVar4) {
      iVar4 = 0xff;
    }
    *(char *)(param_3 + 0x3d) = (char)iVar4;
    iVar4 = (CONCAT11(bStack_9,bStack_a) & 0xff) * uVar3;
    iVar4 = (uint)*(byte *)(param_3 + 0x3e) - ((int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe);
    if (iVar4 < 0) {
      *(undefined1 *)(param_3 + 0x3e) = 0;
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    }
LAB_010684a2:
    if (0xff < iVar4) {
      iVar4 = 0xff;
    }
    *(char *)(param_3 + 0x3e) = (char)iVar4;
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  case 3:
    uVar3 = (uint)((longlong)iVar4 * (longlong)(int)param_2) >> 0xe |
            (int)((ulonglong)((longlong)iVar4 * (longlong)(int)param_2) >> 0x20) << 0x12;
    iVar4 = (CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)) & 0xff) * uVar3;
    iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe) * (uint)*pbVar1;
    *pbVar1 = ((char)(iVar4 / 0xff) + (char)(iVar4 >> 0x1f)) -
              (char)((longlong)iVar4 * 0x80808081 >> 0x3f);
    iVar4 = (CONCAT12(bStack_9,CONCAT11(bStack_a,bStack_b)) & 0xff) * uVar3;
    iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe) * (uint)*(byte *)(param_3 + 0x3d);
    *(char *)(param_3 + 0x3d) =
         ((char)(iVar4 / 0xff) + (char)(iVar4 >> 0x1f)) -
         (char)((longlong)iVar4 * 0x80808081 >> 0x3f);
    iVar4 = (CONCAT11(bStack_9,bStack_a) & 0xff) * uVar3;
    iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe) * (uint)*(byte *)(param_3 + 0x3e);
    *(char *)(param_3 + 0x3e) =
         ((char)(iVar4 / 0xff) + (char)(iVar4 >> 0x1f)) -
         (char)((longlong)iVar4 * 0x80808081 >> 0x3f);
    iVar4 = ((int)(bStack_9 * uVar3 + ((int)(bStack_9 * uVar3) >> 0x1f & 0x3fffU)) >> 0xe) *
            (uint)*(byte *)(param_3 + 0x3f);
    *(char *)(param_3 + 0x3f) =
         ((char)(iVar4 / 0xff) + (char)(iVar4 >> 0x1f)) -
         (char)((longlong)iVar4 * 0x80808081 >> 0x3f);
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  case 4:
    uVar3 = (uint)((longlong)iVar4 * (longlong)(int)param_2) >> 0xe |
            (int)((ulonglong)((longlong)iVar4 * (longlong)(int)param_2) >> 0x20) << 0x12;
    iVar7 = bStack_9 * uVar3;
    iVar4 = uVar3 * 0xff;
    _param_8 = (int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
    uVar3 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
    bVar2 = local_c;
    if (bStack_9 <= local_c) {
      bVar2 = bStack_9;
    }
    param_2 = (uint)bVar2;
    iVar7 = 0xff - (uVar3 & 0xff);
    iVar4 = (uint)*pbVar1 * iVar7 + 0x7f;
    *pbVar1 = (char)((iVar4 >> 0x1f & 0xffU) + iVar4 >> 8) + (char)(param_2 * _param_8 >> 8);
    bVar2 = bStack_b;
    if (bStack_9 <= bStack_b) {
      bVar2 = bStack_9;
    }
    iVar4 = (uint)*(byte *)(param_3 + 0x3d) * iVar7 + 0x7f;
    *(char *)(param_3 + 0x3d) =
         (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + (char)(bVar2 * _param_8 >> 8);
    bVar2 = bStack_a;
    if (bStack_9 <= bStack_a) {
      bVar2 = bStack_9;
    }
    iVar7 = (uint)*(byte *)(param_3 + 0x3e) * iVar7 + 0x7f;
    iVar4 = uVar3 + *(byte *)(param_3 + 0x3f);
    *(char *)(param_3 + 0x3e) =
         (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + (char)(bVar2 * _param_8 >> 8);
    if (iVar4 < 0) {
      *(undefined1 *)(param_3 + 0x3f) = 0;
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    }
LAB_01068705:
    if (0xff < iVar4) {
      iVar4 = 0xff;
    }
    *(char *)(param_3 + 0x3f) = (char)iVar4;
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  case 5:
    iVar4 = (0xff - (uint)bStack_9) *
            ((uint)((longlong)iVar4 * (longlong)(int)param_2) >> 0xe |
            (int)((ulonglong)((longlong)iVar4 * (longlong)(int)param_2) >> 0x20) << 0x12);
    iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe;
    if (iVar4 == 0) {
      param_2 = (uint)*pbVar1;
    }
    else {
      uVar3 = (int)((CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)) & 0xff) * 0xff) / iVar4;
      param_2 = uVar3 & 0xff;
      if (0xfe < (int)uVar3) {
        param_2 = 0xff;
      }
    }
    sVar6 = (short)iVar4;
    iVar7 = (param_2 - *pbVar1) * (int)sVar6;
    *pbVar1 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *pbVar1;
    if (iVar4 == 0) {
      param_2 = (uint)*(byte *)(param_3 + 0x3d);
    }
    else {
      uVar3 = (int)((CONCAT12(bStack_9,CONCAT11(bStack_a,bStack_b)) & 0xff) * 0xff) / iVar4;
      param_2 = uVar3 & 0xff;
      if (0xfe < (int)uVar3) {
        param_2 = 0xff;
      }
    }
    iVar7 = (param_2 - *(byte *)(param_3 + 0x3d)) * (int)sVar6;
    *(byte *)(param_3 + 0x3d) =
         (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_3 + 0x3d);
    if (iVar4 == 0) {
      param_2 = (uint)*(byte *)(param_3 + 0x3e);
    }
    else {
      uVar3 = (int)((CONCAT11(bStack_9,bStack_a) & 0xff) * 0xff) / iVar4;
      param_2 = uVar3 & 0xff;
      if (0xfe < (int)uVar3) {
        param_2 = 0xff;
      }
    }
    iVar7 = (param_2 - *(byte *)(param_3 + 0x3e)) * (int)sVar6;
    *(byte *)(param_3 + 0x3e) =
         (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_3 + 0x3e);
    iVar4 = iVar4 + (uint)*(byte *)(param_3 + 0x3f);
    if (iVar4 < 0) {
      *(undefined1 *)(param_3 + 0x3f) = 0;
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    }
LAB_01068873:
    if (0xff < iVar4) {
      iVar4 = 0xff;
    }
    *(char *)(param_3 + 0x3f) = (char)iVar4;
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  case 0xc:
    if ((bStack_9 != 0) && (*(char *)(param_3 + 0x3f) != '\0')) {
      uVar3 = (uint)((longlong)iVar4 * (longlong)(int)param_2) >> 0xe |
              (int)((ulonglong)((longlong)iVar4 * (longlong)(int)param_2) >> 0x20) << 0x12;
      iVar4 = bStack_9 * uVar3;
      iVar7 = 0xff - ((int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe);
      iVar4 = (0xff - (uint)bStack_9) * uVar3;
      iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe;
      uVar3 = (int)((CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)) & 0xff) * iVar4 +
                   (uint)*pbVar1 * iVar7) / 0xff;
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      else if ((int)(uint)*(byte *)(param_3 + 0x3f) < (int)uVar3) {
        uVar3 = (uint)*(byte *)(param_3 + 0x3f);
      }
      *pbVar1 = (byte)uVar3;
      uVar3 = (int)((CONCAT12(bStack_9,CONCAT11(bStack_a,bStack_b)) & 0xff) * iVar4 +
                   (uint)*(byte *)(param_3 + 0x3d) * iVar7) / 0xff;
      if ((int)uVar3 < 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uint)*(byte *)(param_3 + 0x3f);
        if ((int)uVar3 <= (int)(uint)*(byte *)(param_3 + 0x3f)) {
          uVar5 = uVar3;
        }
      }
      *(char *)(param_3 + 0x3d) = (char)uVar5;
      uVar3 = (int)((CONCAT11(bStack_9,bStack_a) & 0xff) * iVar4 +
                   (uint)*(byte *)(param_3 + 0x3e) * iVar7) / 0xff;
      if ((int)uVar3 < 0) {
        *(undefined1 *)(param_3 + 0x3e) = 0;
        (**(code **)(param_3 + 0x10))(param_3);
        return;
      }
      if ((int)(uint)*(byte *)(param_3 + 0x3f) < (int)uVar3) {
        uVar3 = (uint)*(byte *)(param_3 + 0x3f);
      }
      *(char *)(param_3 + 0x3e) = (char)uVar3;
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    }
    break;
  case 0xffffffff:
    iVar4 = ((uint)((longlong)iVar4 * (longlong)(int)param_2) >> 0xe |
            (int)((ulonglong)((longlong)iVar4 * (longlong)(int)param_2) >> 0x20) << 0x12) * 0xff;
    (*(code *)**(undefined4 **)(param_1 + 0xc))
              (pbVar1,&local_c,(int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe);
  }
switchD_01067dec_caseD_0:
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}


