/* Module: rmme3260.dll
   Function: FUN_66235730
   Address: 66235730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_66235730(int param_1,int *param_2)

{
  HWND hWnd;
  uint *puVar1;
  int iVar2;
  LONG LVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  DWORD DVar10;
  HINSTANCE hInstance;
  int *piVar11;
  int iVar12;
  LPVOID lpParam;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  HWND local_8;
  
  iVar2 = param_1;
  _DAT_6626fcc4 = 1;
  piVar11 = (int *)(param_1 + -8);
  FUN_66237ea0(piVar11);
  if (((*(int *)(param_1 + 0x24) == 0) && (*(int *)(param_1 + 0x109) == 0)) &&
     (*(int *)(param_1 + 0xf1) == 0)) {
    *(int **)(param_1 + 0x24) = param_2;
    hWnd = (HWND)*param_2;
    *(HWND *)(param_1 + 0x109) = hWnd;
    LVar3 = GetWindowLongA(hWnd,-4);
    *(LONG *)(param_1 + 0xf1) = LVar3;
    SetWindowLongA(*(HWND *)(param_1 + 0x109),-4,0x662378a0);
    FUN_66250fc0(&DAT_6627cea0,*(uint *)(param_1 + 0x109),(int)piVar11);
    if ((*(int *)(param_1 + 0x76) == 0) && (*(int *)(param_1 + 0x44) == 0)) {
      puVar4 = operator_new(0x54);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_66245630(puVar4);
      }
      *(undefined4 **)(param_1 + 0x76) = puVar4;
      FUN_66245ae0(puVar4,*(HWND *)(param_1 + 0x109));
    }
    if ((*(byte *)(param_1 + 0x59) & 2) == 0) {
      if (*(int *)(param_1 + 0x54) == 0) {
        pvVar5 = operator_new(0x90);
        if (pvVar5 == (void *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = FUN_66243d90(pvVar5,*(int **)(param_1 + 0x20),piVar11);
        }
        *(int **)(param_1 + 0x54) = piVar6;
        (**(code **)(*piVar6 + 4))(piVar6);
      }
    }
    else {
      if (*(int *)(param_1 + 0xb4) == 0) {
        pvVar5 = operator_new(0x937);
        if (pvVar5 == (void *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = FUN_66244580(pvVar5,*(int **)(param_1 + 0x20),piVar11);
        }
        *(int **)(param_1 + 0xb4) = piVar6;
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      if ((*(byte *)(*(int *)(param_1 + 0xb4) + 0x26) & 2) == 0) {
        iVar7 = FUN_662352f0((int)piVar11);
        if (iVar7 != 0) {
          iVar7 = **(int **)(param_1 + 0xb4);
          uVar8 = FUN_662352f0((int)piVar11);
          (**(code **)(iVar7 + 0x10))(*(undefined4 *)(param_1 + 0xb4),uVar8);
        }
      }
      if (*(int *)(param_1 + 0xb8) == 0) {
        pvVar5 = operator_new(0x937);
        if (pvVar5 == (void *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = FUN_66244580(pvVar5,*(int **)(param_1 + 0x20),piVar11);
        }
        *(undefined4 **)(param_1 + 0xb8) = puVar4;
        (**(code **)(**(int **)(param_1 + 0xb4) + 4))(*(int **)(param_1 + 0xb4));
      }
      if (*(int *)(param_1 + 0x44) == 0) {
        pvVar5 = operator_new(0x18);
        if (pvVar5 == (void *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = (undefined4 *)FUN_6623a960(pvVar5,piVar11);
        }
        *(undefined4 **)(param_1 + 0xe5) = puVar4;
        FUN_6623aac0(puVar4);
        FUN_6623aca0(*(undefined4 **)(param_1 + 0xe5));
        puVar4 = FUN_66236110(0x56000000,(HWND)**(undefined4 **)(param_1 + 0xe5));
        if (*(int *)(param_1 + 0x7a) == 0) {
          puVar9 = operator_new(0x54);
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            puVar9 = FUN_66245630(puVar9);
          }
          *(undefined4 **)(param_1 + 0x7a) = puVar9;
          FUN_66245ae0(puVar9,(HWND)**(undefined4 **)(param_1 + 0xe5));
        }
      }
      else {
        puVar4 = (undefined4 *)FUN_66236260(*(int *)(param_1 + 0x44));
        puVar4 = FUN_66236110(0x56000000,(HWND)*puVar4);
      }
      *(undefined4 *)(param_1 + 0xe9) = *puVar4;
      puVar9 = operator_new(0x24);
      *(undefined4 **)(param_1 + 0x28) = puVar9;
      *puVar9 = *(undefined4 *)(param_1 + 0xe9);
      LVar3 = GetWindowLongA(*(HWND *)(param_1 + 0xe9),-4);
      *(LONG *)(param_1 + 0xf5) = LVar3;
      SetWindowLongA(*(HWND *)(param_1 + 0xe9),-4,0x66237940);
      FUN_66250fc0(&DAT_6627cea0,*(uint *)(param_1 + 0xe9),(int)piVar11);
      if (puVar4 != (undefined4 *)0x0) {
        operator_delete(puVar4);
      }
      iVar7 = *(int *)(param_1 + 0x44);
      if (iVar7 != 0) {
        uVar8 = *(undefined4 *)(iVar7 + 0x119);
        *(undefined4 *)(param_1 + 0x10d) = *(undefined4 *)(iVar7 + 0x115);
        *(undefined4 *)(param_1 + 0x111) = uVar8;
      }
    }
    DVar10 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 0xc0) = DVar10;
    if ((*(byte *)(param_1 + 0x59) & 2) != 0) {
      FUN_6623a590(piVar11);
    }
    if ((*(byte *)(param_1 + 0x58) & 0x80) != 0) {
      (**(code **)(*(int *)(param_1 + -4) + 0x30))
                (param_1 + -4,*(undefined4 *)(param_1 + 0xcd),*(undefined4 *)(param_1 + 0xd1));
      *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0x7f;
    }
    if ((*(byte *)(param_1 + 0x59) & 1) != 0) {
      (**(code **)(*(int *)(param_1 + -4) + 0x28))
                (param_1 + -4,*(undefined4 *)(param_1 + 0xd5),*(undefined4 *)(param_1 + 0xd9));
      *(byte *)(param_1 + 0x59) = *(byte *)(param_1 + 0x59) & 0xfe;
    }
    if (*(int *)(param_1 + 0x5a) != 0) {
      param_2 = (int *)0x0;
      local_c = *(int *)(*(int *)(param_1 + 0x5a) + 4);
      param_1 = 0;
      if (0 < local_c) {
        do {
          lpParam = (LPVOID)0x0;
          iVar7 = *(int *)(**(int **)(iVar2 + 0x5a) + param_1 * 4);
          hInstance = (HINSTANCE)FUN_662379e0();
          local_8 = CreateWindowExA(0,s_CPNSiteWindowed_6626fd90,&DAT_6627cf3c,0x56000000,0,0,0,0,
                                    *(HWND *)(iVar2 + 0x109),(HMENU)0x0,hInstance,lpParam);
          puVar9 = operator_new(0x24);
          puVar4 = puVar9;
          for (iVar12 = 9; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          *puVar9 = local_8;
          (**(code **)(*(int *)(iVar7 + 8) + 0xc))((int *)(iVar7 + 8),puVar9);
          iVar7 = (*(code *)**(undefined4 **)(iVar7 + 4))(iVar7 + 4,&DAT_6626ac28,&param_2);
          if (iVar7 == 0) {
            (**(code **)(*param_2 + 4))(param_2);
          }
          param_1 = param_1 + 1;
        } while (param_1 < local_c);
      }
      FUN_66235c20((void *)(iVar2 + -8),(int *)0x0);
      puVar4 = *(undefined4 **)(iVar2 + 0x5a);
      if (puVar4 != (undefined4 *)0x0) {
        FUN_6624fd90(puVar4);
        operator_delete(puVar4);
      }
      *(undefined4 *)(iVar2 + 0x5a) = 0;
    }
    if (*(int *)(iVar2 + 0x44) == 0) {
      piVar11 = (int *)(iVar2 + 0x10);
      (**(code **)(*(int *)(iVar2 + 0x10) + 0x30))(piVar11,*(undefined4 *)(iVar2 + 0x7e));
      (**(code **)(*piVar11 + 0x28))(piVar11,*(undefined4 *)(iVar2 + 0x82));
      (**(code **)(*piVar11 + 0x18))(piVar11,*(undefined4 *)(iVar2 + 0x8a));
      (**(code **)(*piVar11 + 0x20))(piVar11,*(undefined4 *)(iVar2 + 0x86));
      (**(code **)(*piVar11 + 0x10))(piVar11,*(undefined4 *)(iVar2 + 0x8e));
    }
    if (*(int *)(iVar2 + 0x2c) == 0) {
      *(byte *)(iVar2 + 0x58) = *(byte *)(iVar2 + 0x58) | 1;
    }
    else {
      local_20 = *(undefined4 *)(iVar2 + 0x109);
      local_24 = 0x4001;
      *(byte *)(iVar2 + 0x58) = *(byte *)(iVar2 + 0x58) | 2;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      (**(code **)(**(int **)(iVar2 + 0x2c) + 0x14))(*(int **)(iVar2 + 0x2c),&local_24);
    }
    if (iVar2 == 8) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = (int *)(iVar2 + -4);
    }
    FUN_66243ac0(&DAT_6627ce60,piVar11,0);
    puVar1 = *(uint **)(iVar2 + 0x28);
    if (puVar1 != (uint *)0x0) {
      if (iVar2 != 8) {
        FUN_66243840(&DAT_6627ce60,puVar1,(undefined4 *)(iVar2 + -4));
        return 0;
      }
      FUN_66243840(&DAT_6627ce60,puVar1,(undefined4 *)0x0);
    }
    return 0;
  }
  return 0x80040009;
}


