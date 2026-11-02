/* Module: atrc3260.dll
   Function: FUN_68001200
   Address: 68001200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_68001200(undefined4 *param_1)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_8;
  
  local_8 = 8;
  *param_1 = &PTR_FUN_68004098;
  param_1[0x3d] = 0xc0;
  param_1[0x3e] = 0x110;
  param_1[0x3f] = 0x130;
  param_1[0x40] = 0x180;
  param_1[0x41] = 0x1a8;
  param_1[0x42] = 0x200;
  param_1[0x43] = 0x300;
  param_1[0x44] = 0x400;
  puVar6 = param_1 + 0x55;
  puVar7 = param_1 + 1;
  puVar5 = param_1 + 0x45;
  do {
    *(undefined2 *)puVar7 = 1;
    *(undefined4 *)((int)puVar7 + 2) = 0xac44;
    *(undefined2 *)((int)puVar7 + 6) = 0x10;
    *(undefined2 *)(puVar7 + 2) = 2;
    puVar7[0x14] = *puVar7;
    puVar7[0x15] = puVar7[1];
    *(undefined2 *)(puVar7 + 0x16) = *(undefined2 *)(puVar7 + 2);
    *(undefined2 *)(puVar5 + -0x1c) = 1;
    uVar4 = puVar6[-0x18];
    if (uVar4 < 0x89) {
      if ((uVar4 != 0x88) && (uVar4 != 0x60)) {
        iVar3 = 1;
        *puVar6 = 1;
        goto LAB_68001363;
      }
LAB_680012dc:
      iVar3 = 4;
      *puVar6 = 0x14;
    }
    else {
      if (uVar4 < 0x111) {
        if ((uVar4 != 0x110) && (uVar4 != 0xc0)) goto LAB_6800134f;
        goto LAB_680012dc;
      }
      if (uVar4 < 0x181) {
        if ((uVar4 == 0x180) || (uVar4 == 0x130)) {
LAB_68001312:
          iVar3 = 3;
          *puVar6 = 0x1e;
        }
        else {
          iVar3 = 1;
          *puVar6 = 1;
        }
      }
      else {
        if (uVar4 < 0x201) {
          if (uVar4 == 0x200) {
LAB_6800132f:
            iVar3 = 2;
            *puVar6 = 0x1e;
            goto LAB_68001363;
          }
          if (uVar4 == 0x1a8) goto LAB_68001312;
        }
        else if (uVar4 < 0x261) {
          if ((uVar4 == 0x260) || (uVar4 == 0x220)) goto LAB_6800132f;
        }
        else if (((uVar4 == 0x300) || (uVar4 == 0x350)) || (uVar4 == 0x400)) {
          iVar3 = 1;
          *puVar6 = 10;
          goto LAB_68001363;
        }
LAB_6800134f:
        iVar3 = 1;
        *puVar6 = 1;
      }
    }
LAB_68001363:
    puVar6[-0x28] = iVar3 * puVar6[-0x18];
    puVar6[8] = 0;
    puVar6[0x10] = 0;
    uVar2 = *(ushort *)(puVar7 + 2);
    uVar4 = iVar3 * (uint)uVar2 * 0x400;
    puVar6[-8] = uVar4;
    puVar6[-0x20] =
         (iVar3 * (uint)uVar2 * 0x200 +
         (uint)*(ushort *)(puVar7 + 0x16) * *(int *)((int)puVar7 + 0x52) * puVar6[-0x28] * 8) /
         uVar4;
    *(undefined2 *)puVar5 = 0x88e;
    puVar1 = puVar6 + -0x20;
    puVar6 = puVar6 + 1;
    puVar7 = (undefined4 *)((int)puVar7 + 10);
    *(ushort *)(puVar5 + 4) = (-(ushort)(*puVar1 < 0x19640) & 0x10) + 2;
    local_8 = local_8 + -1;
    puVar5 = (undefined4 *)((int)puVar5 + 2);
    if (local_8 == 0) {
      param_1[0x70] = 0x4074;
      param_1[0x71] = 0x4074;
      param_1[0x6d] = 0x3070;
      param_1[0x6e] = 0x3afc;
      param_1[0x6f] = 0x3584;
      param_1[0x72] = 0x4b00;
      param_1[0x73] = 22000;
      param_1[0x74] = 22000;
      param_1[0x75] = 0;
      return;
    }
  } while( true );
}


