/* Module: vegas30k.dll
   Function: FUN_01187840
   Address: 01187840
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01187840(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_2 == 0 && param_3 == 0) {
    if (*(int *)(param_1 + 0x8bc) == 0) {
      return;
    }
    *(int *)(param_1 + 0x8bc) = *(int *)(param_1 + 0x8bc) + -1;
    return;
  }
  FUN_01187630(&param_2);
  if (*(int *)(param_1 + 0x5ac) == 0) {
LAB_011879eb:
    iVar1 = *(int *)(param_1 + 0x8a4);
    uVar3 = *(uint *)(param_1 + 0x8a0);
    if ((iVar1 < param_3) || ((iVar1 <= param_3 && (uVar3 < param_2)))) {
      iVar1 = *(int *)(param_1 + 0x534);
      *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(param_1 + 0x530);
    }
    else {
      iVar1 = (iVar1 - param_3) - (uint)(uVar3 < param_2);
      *(uint *)(param_1 + 0x8a0) = uVar3 - param_2;
    }
    iVar2 = *(int *)(param_1 + 0x534);
    *(int *)(param_1 + 0x8a4) = iVar1;
    uVar4 = *(uint *)(param_1 + 0x8a0);
    uVar3 = *(uint *)(param_1 + 0x530);
    if ((iVar2 < iVar1) || ((iVar2 <= iVar1 && (uVar3 <= uVar4)))) {
      iVar2 = *(int *)(param_1 + 0x56c);
      uVar3 = *(uint *)(param_1 + 0x568);
      if ((iVar1 < iVar2) || ((iVar1 <= iVar2 && (uVar4 <= uVar3)))) {
LAB_01187a61:
        iVar2 = iVar1;
        uVar3 = uVar4;
      }
    }
LAB_01187a65:
    *(uint *)(param_1 + 0x8a0) = uVar3;
    *(int *)(param_1 + 0x8a4) = iVar2;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x5a4) + *(int *)(param_1 + 0x594) +
            (uint)CARRY4(*(uint *)(param_1 + 0x5a0),*(uint *)(param_1 + 0x590));
    if ((iVar1 < *(int *)(param_1 + 0x534)) ||
       ((iVar1 <= *(int *)(param_1 + 0x534) &&
        (*(uint *)(param_1 + 0x5a0) + *(uint *)(param_1 + 0x590) < *(uint *)(param_1 + 0x530)))))
    goto LAB_011879eb;
    uVar3 = *(uint *)(param_1 + 0x8a0);
    iVar1 = *(int *)(param_1 + 0x8a4);
    if (*(int *)(param_1 + 0x5ac) == 0) {
LAB_0118796e:
      if ((iVar1 < param_3) || ((iVar1 <= param_3 && (uVar3 < param_2)))) {
        *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(param_1 + 0x530);
        iVar1 = *(int *)(param_1 + 0x534);
      }
      else {
        iVar1 = (iVar1 - param_3) - (uint)(uVar3 < param_2);
        *(uint *)(param_1 + 0x8a0) = uVar3 - param_2;
      }
      iVar2 = *(int *)(param_1 + 0x534);
      *(int *)(param_1 + 0x8a4) = iVar1;
      uVar4 = *(uint *)(param_1 + 0x8a0);
      if ((iVar2 < iVar1) || ((iVar2 <= iVar1 && (*(uint *)(param_1 + 0x530) <= uVar4)))) {
        iVar2 = *(int *)(param_1 + 0x56c);
        uVar3 = *(uint *)(param_1 + 0x568);
        if ((iVar2 <= iVar1) && ((iVar2 < iVar1 || (uVar3 < uVar4)))) goto LAB_01187a65;
        goto LAB_01187a61;
      }
      uVar3 = *(uint *)(param_1 + 0x530);
      goto LAB_01187a65;
    }
    iVar2 = *(int *)(param_1 + 0x594);
    uVar4 = *(uint *)(param_1 + 0x590);
    if ((iVar1 < iVar2) || ((iVar1 <= iVar2 && (uVar3 < uVar4)))) goto LAB_0118796e;
    iVar2 = *(int *)(param_1 + 0x5a4) + iVar2 + (uint)CARRY4(*(uint *)(param_1 + 0x5a0),uVar4);
    if ((iVar2 < iVar1) || ((iVar2 <= iVar1 && (*(uint *)(param_1 + 0x5a0) + uVar4 < uVar3))))
    goto LAB_0118796e;
    if (param_2 != 0 || param_3 != 0) {
      iVar2 = (iVar1 - param_3) - (uint)(uVar3 < param_2);
      if ((*(int *)(param_1 + 0x594) < iVar2) ||
         ((*(int *)(param_1 + 0x594) <= iVar2 && (*(uint *)(param_1 + 0x590) <= uVar3 - param_2))))
      {
        *(uint *)(param_1 + 0x8a0) = uVar3 - param_2;
        *(int *)(param_1 + 0x8a4) = iVar2;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x590);
        param_2 = uVar3 - uVar4;
        *(uint *)(param_1 + 0x8a0) = uVar4;
        param_3 = (iVar1 - *(int *)(param_1 + 0x594)) - (uint)(uVar3 < uVar4);
        *(int *)(param_1 + 0x8a4) = *(int *)(param_1 + 0x594);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x544);
  uVar3 = *(uint *)(param_1 + 0x540);
  if ((iVar1 < param_3) || ((iVar1 <= param_3 && (uVar3 < param_2)))) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x540) = 0;
  }
  else {
    iVar1 = (iVar1 - param_3) - (uint)(uVar3 < param_2);
    *(uint *)(param_1 + 0x540) = uVar3 - param_2;
  }
  *(int *)(param_1 + 0x544) = iVar1;
  if (*(int *)(param_1 + 0x6a4) == 0) goto LAB_01187d80;
  if (*(int *)(param_1 + 0x74c) != 0) {
    iVar1 = *(int *)(param_1 + 0x744) + *(int *)(param_1 + 0x734) +
            (uint)CARRY4(*(uint *)(param_1 + 0x740),*(uint *)(param_1 + 0x730));
    if ((*(int *)(param_1 + 0x6f4) <= iVar1) &&
       ((*(int *)(param_1 + 0x6f4) < iVar1 ||
        (*(uint *)(param_1 + 0x6f0) <= *(uint *)(param_1 + 0x740) + *(uint *)(param_1 + 0x730))))) {
      iVar1 = *(int *)(param_1 + 0x704);
      uVar3 = *(uint *)(param_1 + 0x700);
      if ((*(int *)(param_1 + 0x74c) == 0) ||
         ((iVar1 < *(int *)(param_1 + 0x734) ||
          ((iVar1 <= *(int *)(param_1 + 0x734) && (uVar3 < *(uint *)(param_1 + 0x730))))))) {
LAB_01187bf6:
        if ((iVar1 < param_3) || ((iVar1 <= param_3 && (uVar3 < param_2)))) {
          *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_1 + 0x6f0);
          *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_1 + 0x6f4);
        }
        else {
          *(uint *)(param_1 + 0x700) = uVar3 - param_2;
          *(uint *)(param_1 + 0x704) = (iVar1 - param_3) - (uint)(uVar3 < param_2);
        }
        iVar1 = *(int *)(param_1 + 0x704);
        iVar2 = *(int *)(param_1 + 0x6f4);
        uVar3 = *(uint *)(param_1 + 0x700);
        if ((iVar2 < iVar1) || ((iVar2 <= iVar1 && (*(uint *)(param_1 + 0x6f0) <= uVar3)))) {
          iVar2 = *(int *)(param_1 + 0x724);
          uVar4 = *(uint *)(param_1 + 0x720);
          if ((iVar1 < iVar2) || ((iVar1 <= iVar2 && (uVar3 <= uVar4)))) {
            uVar4 = uVar3;
            iVar2 = iVar1;
          }
        }
        else {
          uVar4 = *(uint *)(param_1 + 0x6f0);
        }
        *(uint *)(param_1 + 0x700) = uVar4;
        iVar1 = *(int *)(param_1 + 0x714);
        *(int *)(param_1 + 0x704) = iVar2;
        uVar3 = *(uint *)(param_1 + 0x710);
        if ((iVar1 < param_3) || ((iVar1 <= param_3 && (uVar3 < param_2)))) {
          *(undefined4 *)(param_1 + 0x710) = 0;
          *(undefined4 *)(param_1 + 0x714) = 0;
          goto LAB_01187d80;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x744) + *(int *)(param_1 + 0x734) +
                (uint)CARRY4(*(uint *)(param_1 + 0x740),*(uint *)(param_1 + 0x730));
        if ((iVar2 < iVar1) ||
           ((iVar2 <= iVar1 && (*(uint *)(param_1 + 0x740) + *(uint *)(param_1 + 0x730) < uVar3))))
        goto LAB_01187bf6;
        if (param_2 != 0 || param_3 != 0) {
          iVar2 = (iVar1 - param_3) - (uint)(uVar3 < param_2);
          if ((*(int *)(param_1 + 0x734) < iVar2) ||
             ((*(int *)(param_1 + 0x734) <= iVar2 && (*(uint *)(param_1 + 0x730) <= uVar3 - param_2)
              ))) {
            *(uint *)(param_1 + 0x700) = uVar3 - param_2;
            *(int *)(param_1 + 0x704) = iVar2;
          }
          else {
            uVar4 = *(uint *)(param_1 + 0x730);
            param_2 = uVar3 - uVar4;
            *(uint *)(param_1 + 0x700) = uVar4;
            param_3 = (iVar1 - *(int *)(param_1 + 0x734)) - (uint)(uVar3 < uVar4);
            *(int *)(param_1 + 0x704) = *(int *)(param_1 + 0x734);
          }
        }
        iVar1 = *(int *)(param_1 + 0x714);
        uVar3 = *(uint *)(param_1 + 0x710);
        if ((iVar1 < param_3) || ((iVar1 <= param_3 && (uVar3 < param_2)))) {
          *(undefined4 *)(param_1 + 0x710) = 0;
          *(undefined4 *)(param_1 + 0x714) = 0;
          goto LAB_01187d80;
        }
      }
      *(uint *)(param_1 + 0x710) = uVar3 - param_2;
      *(uint *)(param_1 + 0x714) = (iVar1 - param_3) - (uint)(uVar3 < param_2);
      goto LAB_01187d80;
    }
  }
  iVar1 = *(int *)(param_1 + 0x704);
  uVar3 = *(uint *)(param_1 + 0x700);
  if ((iVar1 < param_3) || ((iVar1 <= param_3 && (uVar3 < param_2)))) {
    iVar1 = *(int *)(param_1 + 0x6f4);
    *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_1 + 0x6f0);
  }
  else {
    iVar1 = (iVar1 - param_3) - (uint)(uVar3 < param_2);
    *(uint *)(param_1 + 0x700) = uVar3 - param_2;
  }
  iVar2 = *(int *)(param_1 + 0x6f4);
  *(int *)(param_1 + 0x704) = iVar1;
  uVar3 = *(uint *)(param_1 + 0x700);
  uVar4 = *(uint *)(param_1 + 0x6f0);
  if ((iVar2 < iVar1) || ((iVar2 <= iVar1 && (uVar4 <= uVar3)))) {
    iVar2 = *(int *)(param_1 + 0x724);
    uVar4 = *(uint *)(param_1 + 0x720);
    if ((iVar1 < iVar2) || ((iVar1 <= iVar2 && (uVar3 <= uVar4)))) {
      uVar4 = uVar3;
      iVar2 = iVar1;
    }
  }
  *(uint *)(param_1 + 0x700) = uVar4;
  iVar1 = *(int *)(param_1 + 0x714);
  *(int *)(param_1 + 0x704) = iVar2;
  uVar3 = *(uint *)(param_1 + 0x710);
  if ((iVar1 < param_3) || ((iVar1 <= param_3 && (uVar3 < param_2)))) {
    *(undefined4 *)(param_1 + 0x710) = 0;
    *(undefined4 *)(param_1 + 0x714) = 0;
  }
  else {
    *(uint *)(param_1 + 0x710) = uVar3 - param_2;
    *(uint *)(param_1 + 0x714) = (iVar1 - param_3) - (uint)(uVar3 < param_2);
  }
  FUN_01194980(*(undefined4 *)(param_1 + 0x700));
LAB_01187d80:
  iVar1 = *(int *)(param_1 + 0x854);
  uVar3 = *(uint *)(param_1 + 0x850);
  if ((param_3 < iVar1) || ((param_3 <= iVar1 && (param_2 <= uVar3)))) {
    *(uint *)(param_1 + 0x850) = uVar3 - param_2;
    *(uint *)(param_1 + 0x854) = (iVar1 - param_3) - (uint)(uVar3 < param_2);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x840) - param_2;
    *(uint *)(param_1 + 0x850) = uVar4 + uVar3;
    *(uint *)(param_1 + 0x854) =
         ((*(int *)(param_1 + 0x844) - param_3) - (uint)(*(uint *)(param_1 + 0x840) < param_2)) +
         iVar1 + (uint)CARRY4(uVar4,uVar3);
  }
  uVar3 = *(uint *)(param_1 + 0x858);
  *(uint *)(param_1 + 0x858) = uVar3 - param_2;
  iVar1 = (*(int *)(param_1 + 0x85c) - param_3) - (uint)(uVar3 < param_2);
  *(int *)(param_1 + 0x85c) = iVar1;
  if (*(int *)(param_1 + 0x858) == 0 && iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x850) = 0;
    *(undefined4 *)(param_1 + 0x848) = 0;
    *(undefined4 *)(param_1 + 0x854) = 0;
    *(undefined4 *)(param_1 + 0x84c) = 0;
  }
  if (*(int *)(param_1 + 0x8bc) != 0) {
    *(int *)(param_1 + 0x8bc) = *(int *)(param_1 + 0x8bc) + -1;
  }
  *(uint *)(param_1 + 0x764) = *(uint *)(param_1 + 0x764) | 0x20000000;
  *(uint *)(param_1 + 0x8c4) = *(uint *)(param_1 + 0x8c4) | 0x20000000;
  uVar3 = *(uint *)(param_1 + 0x840) - *(uint *)(param_1 + 0x850);
  iVar1 = (*(int *)(param_1 + 0x844) - *(int *)(param_1 + 0x854)) -
          (uint)(*(uint *)(param_1 + 0x840) < *(uint *)(param_1 + 0x850));
  if ((0 < iVar1) || ((-1 < iVar1 && (499 < uVar3)))) {
    uVar3 = 500;
    iVar1 = 0;
  }
  *(uint *)(param_1 + 0x888) = uVar3;
  *(int *)(param_1 + 0x88c) = iVar1;
  if (*(int *)(param_1 + 0x888) == 0 && iVar1 == 0) {
    return;
  }
  uVar4 = *(int *)(param_1 + 0x888) * (uint)*(ushort *)(param_1 + 0x504);
  puVar5 = (undefined4 *)
           (*(int *)(param_1 + 0x850) * (uint)*(ushort *)(param_1 + 0x504) +
           *(int *)(param_1 + 0x83c));
  puVar6 = *(undefined4 **)(param_1 + 0x880);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  return;
}


