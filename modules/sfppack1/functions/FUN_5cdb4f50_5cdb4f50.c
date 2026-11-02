/* Module: sfppack1.dll
   Function: FUN_5cdb4f50
   Address: 5cdb4f50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cdb4f50(void *this,HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  double dVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  WPARAM WVar6;
  LRESULT LVar7;
  int iVar8;
  uint uVar9;
  uint unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  float10 fVar13;
  int *piVar14;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined1 auStack_40 [4];
  CHAR aCStack_3c [8];
  CHAR aCStack_34 [12];
  undefined1 auStack_28 [8];
  undefined4 local_20 [7];
  
  uVar2 = (ulonglong)local_58;
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      piVar14 = *(int **)((int)this + 0x2c);
      *(HWND *)((int)this + 0x14) = param_1;
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0x18))(piVar14,param_1);
      }
      (**(code **)(*(int *)this + 0x50))();
      (**(code **)(*(int *)this + 0x54))();
      FUN_5ce06190(DAT_5ce237f0,(undefined4 *)&local_58,(undefined4 *)&local_50,2);
      DAT_5ce237f4 = 0;
      iVar3 = FUN_5ce06190(DAT_5ce237f0,(undefined4 *)&local_50,(undefined4 *)((int)&local_58 + 4),2
                          );
      if (-1 < iVar3) {
        DAT_5ce237f4 = local_58._4_4_ & 0xff;
      }
      if (((WPARAM)local_58 == 0) || ((int)DAT_5ce237f4 < 1)) {
        FUN_5cdda790();
      }
      FUN_5ce06190(DAT_5ce237f0,(undefined4 *)((int)&local_58 + 4),(undefined4 *)&local_50,2);
      DAT_5ce237ec = local_58._4_4_;
      if (((DAT_5ce237f8 == 0) && (local_58._4_4_ != -1)) &&
         (*(int *)((int)DAT_5ce237f0 + 0x680) == 0)) {
        PostMessageA(*(HWND *)((int)this + 0x14),0x632,0,0);
      }
      return 1;
    }
    switch(param_2) {
    case 2:
      piVar14 = *(int **)((int)this + 0x2c);
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0x18))(piVar14,*(undefined4 *)((int)this + 0x14));
      }
      FUN_5cdefb30(0,*(HWND *)((int)this + 0x14),0,0,(uchar *)0x0);
      *(undefined4 *)((int)this + 0x14) = 0;
      return 0;
    case 0x14:
      FUN_5ce06190(DAT_5ce237f0,(undefined4 *)&local_50,(undefined4 *)((int)&local_50 + 4),2);
      iVar3 = (uint)local_50;
      DAT_5ce237f4 = 0;
      iVar8 = FUN_5ce06190(DAT_5ce237f0,(undefined4 *)&local_58,(undefined4 *)((int)&local_58 + 4),2
                          );
      if (-1 < iVar8) {
        DAT_5ce237f4 = local_58._4_4_ & 0xff;
      }
      if ((iVar3 == 0) || (uVar4 = 1, (int)DAT_5ce237f4 < 1)) {
        uVar4 = FUN_5cdda790();
      }
      DAT_5ce237e8 = uVar4;
      FUN_5ce06190(DAT_5ce237f0,(undefined4 *)&local_50,(undefined4 *)((int)&local_50 + 4),2);
      DAT_5ce237ec = (uint)local_50;
      piVar14 = *(int **)((int)this + 0x2c);
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0x44))(piVar14,DAT_5ce237e8 == 0);
        (**(code **)(**(int **)((int)this + 0x2c) + 0x4c))(*(int **)((int)this + 0x2c),0);
        return 0;
      }
      break;
    case 0x53:
      FUN_5cdef920(0,param_1,0,param_4[2].unused,(int *)&DAT_5ce12cd0,(uchar *)0x0);
      return 1;
    case 0x7b:
      FUN_5cdb4e50(this,param_1,param_3,(int)(short)param_4,(int)(short)((uint)param_4 >> 0x10));
      return 0;
    }
    return 0;
  }
  if (0x614 < param_2) {
    if (param_2 != 0x632) {
      return 0;
    }
    bVar11 = DAT_5ce237e8 != 0;
    FUN_5cdda4d0((undefined2 *)&local_58);
    FUN_5ce06190(DAT_5ce237f0,(undefined4 *)((int)&local_50 + 4),(undefined4 *)((int)&local_58 + 4),
                 1);
    iVar3 = local_50._4_4_;
    DAT_5ce237f4 = 0;
    iVar8 = FUN_5ce06190(DAT_5ce237f0,local_48,(undefined4 *)&local_50,1);
    if (-1 < iVar8) {
      DAT_5ce237f4 = (uint)local_50 & 0xff;
    }
    if ((iVar3 == 0) || (uVar4 = 1, (int)DAT_5ce237f4 < 1)) {
      uVar4 = FUN_5cdda790();
    }
    DAT_5ce237e8 = uVar4;
    FUN_5ce06190(DAT_5ce237f0,(undefined4 *)((int)&local_50 + 4),local_48,1);
    DAT_5ce237ec = local_50._4_4_;
    piVar14 = *(int **)((int)this + 0x2c);
    bVar12 = DAT_5ce237e8 == 0;
    if (piVar14 != (int *)0x0) {
      (**(code **)(*piVar14 + 0x44))(piVar14);
      (**(code **)(**(int **)((int)this + 0x2c) + 0x4c))(*(int **)((int)this + 0x2c),0);
    }
    if (bVar12) {
      return 0;
    }
    if (bVar11) {
      return 0;
    }
    FUN_5cdb4210(*(HWND *)((int)this + 0x14),2);
    return 0;
  }
  if (param_2 == 0x614) {
    bVar11 = DAT_5ce237e8 != 0;
    FUN_5cdb1e50(param_1);
    piVar14 = *(int **)((int)this + 0x2c);
    bVar12 = DAT_5ce237e8 == 0;
    if (piVar14 != (int *)0x0) {
      (**(code **)(*piVar14 + 0x44))(piVar14);
      (**(code **)(**(int **)((int)this + 0x2c) + 0x4c))(*(int **)((int)this + 0x2c),0);
    }
    if (bVar12) {
      return 0;
    }
    if (bVar11) {
      return 0;
    }
    FUN_5cdb4210(*(HWND *)((int)this + 0x14),2);
    return 0;
  }
  if (param_2 != 0x111) {
    if (param_2 != 0x114) {
      return 0;
    }
    if (*(int *)((int)this + 0x2c) != 0) {
      iVar3 = GetDlgCtrlID(param_4);
      if (iVar3 == 0x3eb) {
        iVar3 = FUN_5cde39a0(0x114,param_3,param_4,1,100);
        local_50 = (double)CONCAT44(local_50._4_4_,iVar3 + 10000);
        (**(code **)(**(int **)((int)this + 0x2c) + 0x20))
                  (*(int **)((int)this + 0x2c),(double)(iVar3 + 10000));
      }
      (**(code **)(*(int *)this + 0x54))();
    }
    return 1;
  }
  if (*(int *)((int)this + 0x2c) == 0) {
    return 1;
  }
  uVar4 = param_3 & 0xffff;
  uVar9 = param_3 >> 0x10;
  local_58 = (double)(CONCAT44(param_3,(WPARAM)local_58) & 0xffffffffffff);
  puVar10 = local_20;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  if ((uVar4 < 0x9e34) || (40999 < uVar4)) {
    if (0x3f7 < uVar4) {
      if (uVar4 == 0x7fbc) {
        if (uVar9 == 100) {
          local_58 = (double)(uVar2 & 0xffffffff);
        }
      }
      else if (uVar4 == 41000) {
        FUN_5cdefb30(1,param_1,0,0,(uchar *)0x0);
      }
      else if (uVar4 == 0xa029) {
        bVar11 = DAT_5ce237e8 == 0;
        FUN_5cdb1e50(param_1);
        piVar14 = *(int **)((int)this + 0x2c);
        bVar12 = DAT_5ce237e8 != 0;
        if (piVar14 != (int *)0x0) {
          (**(code **)(*piVar14 + 0x44))(piVar14);
          (**(code **)(**(int **)((int)this + 0x2c) + 0x4c))(*(int **)((int)this + 0x2c),0);
        }
        if ((bVar12) && (bVar11)) {
          FUN_5cdb4210(*(HWND *)((int)this + 0x14),2);
        }
      }
      goto LAB_5cdb568e;
    }
    if (uVar4 == 0x3f7) {
      if (uVar9 != 1) {
        return 1;
      }
      WVar6 = SendMessageA(param_4,0x147,0,0);
      local_58._0_4_ = WVar6;
      LVar7 = SendMessageA(param_4,0x150,WVar6,0);
      local_58 = (double)CONCAT44(local_58._4_4_,LVar7);
      (**(code **)(**(int **)((int)this + 0x2c) + 0x40))(*(int **)((int)this + 0x2c),LVar7);
      (**(code **)(*(int *)this + 0x54))(0x3ef);
      (**(code **)(*(int *)this + 0x54))(0x3f0);
      goto LAB_5cdb568e;
    }
  }
  else {
    FUN_5cdb4cf0((int)this);
    local_58 = (double)((ulonglong)local_58 & 0xffffffff);
  }
  if (local_58._4_4_ == 0x3ec) {
    if (uVar9 != 1) {
      return 1;
    }
    WVar6 = SendMessageA(param_4,0x147,0,0);
    local_58._0_4_ = WVar6;
    LVar7 = SendMessageA(param_4,0x150,WVar6,0);
    local_58 = (double)CONCAT44(local_58._4_4_,LVar7);
    (**(code **)(**(int **)((int)this + 0x2c) + 0x28))(*(int **)((int)this + 0x2c),LVar7);
  }
  else if (local_58._4_4_ == 0x3ef) {
    if (uVar9 != 0x200) {
      return 1;
    }
    if (*(int *)((int)this + 0x14) != 0) {
      piVar14 = *(int **)((int)this + 0x2c);
      (**(code **)(*piVar14 + 0x3c))();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x2c))
                (*(int **)((int)this + 0x2c),(int)&local_58 + 4);
      (**(code **)(**(int **)((int)this + 0x2c) + 0x34))(*(int **)((int)this + 0x2c),&local_58);
      if (piVar14 == (int *)0x1) {
        GetDlgItemTextA(*(HWND *)((int)this + 0x14),0x3ef,(LPSTR)((int)&local_50 + 4),0x14);
        FUN_5cdf1140((LPCSTR)((int)&local_50 + 4),(undefined4 *)0x0);
        local_58 = (double)(ulonglong)unaff_ESI;
        (**(code **)(**(int **)((int)this + 0x2c) + 0x20))();
      }
      else if (piVar14 == (int *)0x2) {
        iVar3 = (**(code **)(**(int **)((int)this + 0x2c) + 0x54))
                          (*(int **)((int)this + 0x2c),&stack0xffffff98);
        GetDlgItemTextA(*(HWND *)((int)this + 0x14),0x3ef,(LPSTR)((int)&local_58 + 4),0x14);
        FUN_5cdb3db0((LPCSTR)((int)&local_58 + 4),(int)auStack_40);
        dVar1 = _DAT_5ce12e70;
        if (-1 < iVar3) {
          uVar4 = FUN_5cdb58a0(piVar14);
          dVar1 = (double)uVar4;
        }
        (**(code **)(**(int **)((int)this + 0x2c) + 0x20))
                  (*(int **)((int)this + 0x2c),
                   (dVar1 / (double)CONCAT44(unaff_ESI,unaff_EDI)) * _DAT_5ce12e28);
      }
      else {
        GetDlgItemTextA(*(HWND *)((int)this + 0x14),0x3ef,(LPSTR)((int)&local_50 + 4),0x14);
        fVar13 = FUN_5cdf1140((LPCSTR)((int)&local_50 + 4),(undefined4 *)0x0);
        local_58 = (double)(fVar13 * (float10)_DAT_5ce12e10);
        (**(code **)(**(int **)((int)this + 0x2c) + 0x20))();
      }
    }
  }
  else if (local_58._4_4_ == 0x3f0) {
    if (uVar9 != 0x200) {
      return 1;
    }
    if (*(int *)((int)this + 0x14) != 0) {
      (**(code **)(**(int **)((int)this + 0x2c) + 0x3c))(*(int **)((int)this + 0x2c));
      if ((WPARAM)local_58 == 1) {
        GetDlgItemTextA(*(HWND *)((int)this + 0x14),0x3f0,aCStack_34,0x14);
        FUN_5cdf1140(aCStack_34,(undefined4 *)0x0);
        piVar14 = *(int **)((int)this + 0x2c);
        iVar3 = *piVar14;
        uVar5 = ftol();
        (**(code **)(iVar3 + 0x30))(piVar14,uVar5);
      }
      else if ((WPARAM)local_58 == 2) {
        iVar3 = (**(code **)(**(int **)((int)this + 0x2c) + 0x54))
                          (*(int **)((int)this + 0x2c),&local_50);
        GetDlgItemTextA(*(HWND *)((int)this + 0x14),0x3f0,aCStack_3c,0x14);
        FUN_5cdb3db0(aCStack_3c,(int)auStack_28);
        if (iVar3 < 0) {
          local_50 = 0.0;
        }
        else {
          uVar4 = FUN_5cdb58a0((WPARAM)local_58);
          local_50 = (double)(ulonglong)uVar4;
          local_50 = (double)(longlong)local_50;
        }
        (**(code **)(**(int **)((int)this + 0x2c) + 0x38))
                  (*(int **)((int)this + 0x2c),(uint)local_50,local_50._4_4_);
        (**(code **)(*(int *)this + 0x54))(0x3ef);
        goto LAB_5cdb568e;
      }
    }
    (**(code **)(*(int *)this + 0x54))();
  }
LAB_5cdb568e:
  (**(code **)(*(int *)this + 0x54))();
  return 1;
}


