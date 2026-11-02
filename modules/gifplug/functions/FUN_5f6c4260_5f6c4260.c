/* Module: gifplug.dll
   Function: FUN_5f6c4260
   Address: 5f6c4260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6c4260(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  void *this;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbStack00000004;
  byte *pbStack00000008;
  undefined2 uStack0000000c;
  byte bStack00000010;
  undefined2 uStack00000012;
  uint uStack00000018;
  int in_stack_00004020;
  char in_stack_00004024;
  uint in_stack_00004028;
  uint in_stack_0000402c;
  ushort in_stack_00004030;
  uint in_stack_00004034;
  int in_stack_00004038;
  int in_stack_0000403c;
  byte in_stack_00004040;
  int in_stack_00004044;
  
  FUN_5f700120();
  iVar11 = 0;
  uStack00000018 = FUN_5f6c3fa0((int)this);
  uVar2 = (ushort)uStack00000018;
  if ((uVar2 == 0) || (9 < uVar2)) {
    uVar5 = CONCAT22((short)(uStack00000018 >> 0x10),0xffec);
  }
  else {
    FUN_5f6c4660(this,uVar2);
    pbVar10 = *(byte **)((int)this + 0x483);
    _bStack00000010 = 0;
    _uStack0000000c = 0;
    pbStack00000004 = &stack0x0000001c;
    pbStack00000008 = pbVar10;
    uVar4 = FUN_5f6c4740((int)this);
    uVar2 = in_stack_00004030;
    if ((short)uVar4 != *(short *)((int)this + 0x339)) {
      uVar7 = in_stack_00004034 & 0xffff;
      do {
        if ((int)uVar7 <= iVar11) break;
        uVar3 = (ushort)uVar4;
        if (uVar3 == *(ushort *)((int)this + 0x337)) {
          *(short *)((int)this + 0x335) = (short)(uStack00000018 + 1);
          *(undefined2 *)((int)this + 0x33f) = *(undefined2 *)((int)this + 0x33b);
          *(short *)((int)this + 0x33d) = (short)(1 << ((byte)(uStack00000018 + 1) & 0x1f));
          uVar4 = FUN_5f6c4740((int)this);
          if ((short)uVar4 == *(short *)((int)this + 0x337)) {
            do {
              uVar4 = FUN_5f6c4740((int)this);
            } while ((short)uVar4 == *(short *)((int)this + 0x337));
          }
          if ((ushort)uVar4 == *(ushort *)((int)this + 0x339)) break;
          if (*(ushort *)((int)this + 0x33f) <= (ushort)uVar4) {
            uVar4 = 0;
          }
          *pbVar10 = (byte)uVar4;
          uVar2 = uVar2 - 1;
          pbStack00000008 = pbVar10 + 1;
          _uStack0000000c = uVar4;
          _bStack00000010 = uVar4;
          if (uVar2 == 0) {
            uVar5 = FUN_5f6c3ff0(this,in_stack_00004020,in_stack_00004024,iVar11,
                                 *(int *)((int)this + 0x483),in_stack_00004028 & 0xffff,
                                 in_stack_0000402c & 0xffff,(uint)in_stack_00004030,uVar7,
                                 in_stack_00004038,in_stack_0000403c,in_stack_00004040,
                                 in_stack_00004044);
            if ((short)uVar5 < 0) {
              return uVar5;
            }
            pbStack00000008 = *(byte **)((int)this + 0x483);
            iVar11 = iVar11 + 1;
            uVar2 = in_stack_00004030;
          }
        }
        else {
          uVar9 = uVar4;
          if (*(ushort *)((int)this + 0x33f) <= uVar3) {
            if (*(ushort *)((int)this + 0x33f) < uVar3) {
              *(int *)((int)this + 0x47f) = *(int *)((int)this + 0x47f) + 1;
            }
            *pbStack00000004 = bStack00000010;
            pbStack00000004 = pbStack00000004 + 1;
            uVar9 = _uStack0000000c;
          }
          pbVar10 = pbStack00000004;
          if (*(ushort *)((int)this + 0x33b) <= (ushort)uVar9) {
            do {
              uVar8 = uVar9 & 0xffff;
              pbStack00000004 = pbVar10 + 1;
              uVar3 = *(ushort *)(&stack0x0000201c + uVar8 * 2);
              uVar9 = (uint)uVar3;
              uVar1 = *(ushort *)((int)this + 0x33b);
              *pbVar10 = (&stack0x0000101c)[uVar8];
              pbVar10 = pbStack00000004;
            } while (uVar1 <= uVar3);
          }
          uVar3 = *(ushort *)((int)this + 0x33f);
          bVar6 = (byte)uVar9;
          *pbStack00000004 = bVar6;
          pbStack00000004 = pbStack00000004 + 1;
          if (uVar3 < *(ushort *)((int)this + 0x33d)) {
            _bStack00000010 = CONCAT22(uStack00000012,(ushort)bVar6);
            *(ushort *)((int)this + 0x33f) = uVar3 + 1;
            (&stack0x0000101c)[uVar3] = bVar6;
            *(undefined2 *)(&stack0x0000201c + (uint)uVar3 * 2) = uStack0000000c;
            _uStack0000000c = uVar4;
          }
          if ((*(ushort *)((int)this + 0x33d) <= *(ushort *)((int)this + 0x33f)) &&
             (*(ushort *)((int)this + 0x335) < 0xc)) {
            *(ushort *)((int)this + 0x33d) = *(ushort *)((int)this + 0x33d) * 2;
            *(ushort *)((int)this + 0x335) = *(ushort *)((int)this + 0x335) + 1;
          }
          if (&stack0x0000001c < pbStack00000004) {
            do {
              pbVar10 = pbStack00000004 + -1;
              pbStack00000004 = pbStack00000004 + -1;
              *pbStack00000008 = *pbVar10;
              uVar2 = uVar2 - 1;
              pbStack00000008 = pbStack00000008 + 1;
              if (uVar2 == 0) {
                uVar5 = FUN_5f6c3ff0(this,in_stack_00004020,in_stack_00004024,iVar11,
                                     *(int *)((int)this + 0x483),in_stack_00004028 & 0xffff,
                                     in_stack_0000402c & 0xffff,(uint)in_stack_00004030,uVar7,
                                     in_stack_00004038,in_stack_0000403c,in_stack_00004040,
                                     in_stack_00004044);
                if ((short)uVar5 < 0) {
                  return uVar5;
                }
                pbStack00000008 = *(byte **)((int)this + 0x483);
                iVar11 = iVar11 + 1;
                uVar2 = in_stack_00004030;
              }
            } while (&stack0x0000001c < pbStack00000004);
          }
        }
        pbVar10 = pbStack00000008;
        uVar4 = FUN_5f6c4740((int)this);
      } while ((short)uVar4 != *(short *)((int)this + 0x339));
    }
    uVar5 = 0;
    if (uVar2 != in_stack_00004030) {
      uVar5 = FUN_5f6c3ff0(this,in_stack_00004020,in_stack_00004024,iVar11,
                           *(int *)((int)this + 0x483),in_stack_00004028 & 0xffff,
                           in_stack_0000402c & 0xffff,(uint)in_stack_00004030,
                           in_stack_00004034 & 0xffff,in_stack_00004038,in_stack_0000403c,
                           in_stack_00004040,in_stack_00004044);
      return uVar5;
    }
  }
  return uVar5;
}


