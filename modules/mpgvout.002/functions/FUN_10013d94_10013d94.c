/* Module: mpgvout.002
   Function: FUN_10013d94
   Address: 10013d94
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10013d94(int param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  
  iVar2 = *(int *)(param_1 + 0x68);
  if (((iVar2 == 1) || (iVar2 == 4)) || (iVar2 == 5)) {
    iVar2 = *(int *)(param_1 + 0x6c);
    if (((iVar2 == 4) || (iVar2 == 6)) || ((iVar2 == 8 || (iVar2 == 10)))) {
      iVar8 = iVar2 + -4 >> 1;
      iVar5 = iVar8 * 0x1c;
      iVar3 = *(int *)(param_1 + 0x68);
      if ((&DAT_1003546c)[iVar3 * 4 + iVar8] == '\0') {
        sprintf(&DAT_10040500,"Invalid video profile(%d)/level(%d) combination",iVar3,iVar2);
        uVar7 = 0x20021;
      }
      else if ((iVar3 == 5) && (*(int *)(param_1 + 0x10) != 1)) {
        sprintf(&DAT_10040500,"Invalid video profile(%d)/ MPEG M(%d) combination",5,
                *(int *)(param_1 + 0x10));
        uVar7 = 0x20022;
      }
      else {
        if (iVar3 == 1) {
          iVar8 = *(int *)(param_1 + 0x74);
          if ((iVar8 != 1) && (iVar8 != 2)) {
            sprintf(&DAT_10040500,"Invalid video profile(%d)/chroma format(%d) combination",1,iVar8)
            ;
            return 0x20024;
          }
        }
        else if (*(int *)(param_1 + 0x74) != 1) {
          sprintf(&DAT_10040500,"Invalid video profile(%d)/chroma format(%d) combination",iVar3,
                  *(int *)(param_1 + 0x74));
          return 0x20023;
        }
        if (3 < iVar3) {
          iVar8 = *(int *)(param_1 + 0x34);
          if ((iVar8 < 3) && (*(int *)(param_1 + 0x1f8) != 0)) {
            sprintf(&DAT_10040500,
                    "Invalid video profile(%d)/frame rate code(%d)/repeatfirst(%d) combination",
                    iVar3,iVar8,*(int *)(param_1 + 0x1f8));
            return 0x20025;
          }
          if (((iVar8 < 7) && (*(int *)(param_1 + 0x70) != 0)) && (*(int *)(param_1 + 0x1f8) != 0))
          {
            sprintf(&DAT_10040500,
                    "Invalid video profile(%d)/frame rate code(%d)/progressive sequence(%d)/repeatfirst(%d) combination"
                    ,iVar3,iVar8,*(int *)(param_1 + 0x70),*(int *)(param_1 + 0x1f8));
            return 0x20026;
          }
        }
        if ((iVar3 == 1) || (*(int *)(param_1 + 0x1b4) != 3)) {
          if ((*(int *)(param_1 + 0x34) < 6) || (iVar2 < 8)) {
            if (0 < *(int *)(param_1 + 0x10)) {
              piVar10 = (int *)(param_1 + 0x90);
              iVar8 = *(int *)(&DAT_100354a0 + iVar5);
              iVar9 = 0;
              iVar11 = 0;
              do {
                if (iVar8 < piVar10[-5]) {
                  sprintf(&DAT_10040500,
                          "Invalid video motion_data[%d].forw_hor_f_code (%d), must be <= %d",iVar11
                          ,*(undefined4 *)(iVar9 + 0x7c + param_1),iVar8);
                  return 0x20017;
                }
                iVar4 = *(int *)(&DAT_100354a4 + iVar5);
                if (iVar4 < piVar10[-4]) {
                  sprintf(&DAT_10040500,
                          "Invalid video motion_data[%d].forw_vert_f_code (%d), must be <= %d",
                          iVar11,piVar10[-4],iVar4);
                  return 0x20018;
                }
                if (iVar11 != 0) {
                  if (iVar8 < piVar10[-1]) {
                    sprintf(&DAT_10040500,
                            "Invalid video motion_data[%d].back_hor_f_code (%d), must be <= %d",
                            iVar11,piVar10[-1],iVar8);
                    return 0x2001b;
                  }
                  if (iVar4 < *piVar10) {
                    sprintf(&DAT_10040500,
                            "Invalid video motion_data[%d].back_vert_f_code (%d), must be <= %d",
                            iVar11,*piVar10,iVar4);
                    return 0x2001c;
                  }
                }
                piVar10 = piVar10 + 8;
                iVar9 = iVar9 + 0x20;
                iVar11 = iVar11 + 1;
              } while (iVar11 < *(int *)(param_1 + 0x10));
            }
            iVar8 = *(int *)(param_1 + 0x365);
            if (*(int *)(&DAT_100354a8 + iVar5) < iVar8) {
              sprintf(&DAT_10040500,
                      "Invalid video horizontal size(%d)/profile(%d)/level(%d) combination, must be <= %d"
                      ,iVar8,iVar3,iVar2,*(int *)(&DAT_100354a8 + iVar5));
              uVar7 = 0x20029;
            }
            else {
              iVar9 = *(int *)(param_1 + 0x369);
              if (*(int *)(&DAT_100354ac + iVar5) < iVar9) {
                sprintf(&DAT_10040500,
                        "Invalid video vertical size(%d)/profile(%d)/level(%d) combination, must be <= %d"
                        ,iVar9,iVar3,iVar2,*(int *)(&DAT_100354ac + iVar5));
                uVar7 = 0x2002a;
              }
              else {
                dVar1 = (double)(iVar8 * iVar9) * *(double *)(param_1 + 0x38);
                if ((NAN((double)*(int *)(&DAT_100354b0 + iVar5)) || NAN(dVar1)) <
                    ((double)*(int *)(&DAT_100354b0 + iVar5) < dVar1)) {
                  sprintf(&DAT_10040500,
                          "Invalid video horizontal size(%d)/vertical size(%d)/frame rate code(%d) combination"
                          ,iVar8,iVar9,*(undefined4 *)(param_1 + 0x34));
                  uVar7 = 0x2002b;
                }
                else {
                  dVar1 = *(double *)(param_1 + 0x40);
                  dVar6 = (double)*(int *)(&DAT_100354b4 + iVar5) * _DAT_10013d8c;
                  if ((NAN(dVar6) || NAN(dVar1)) < (dVar6 < dVar1)) {
                    sprintf(&DAT_10040500,
                            "Invalid video bit rate(%d)/level(%d) combination, must be <= %d",
                            (int)ROUND(dVar1),*(undefined4 *)(param_1 + 0x6c),(int)ROUND(dVar6));
                    uVar7 = 0x20009;
                  }
                  else if (*(int *)(&DAT_100354b8 + iVar5) < *(int *)(param_1 + 0x54)) {
                    sprintf(&DAT_10040500,
                            "Invalid video vbv buffer size(%d)/level(%d) combination, must be <= %d"
                            ,*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x6c),
                            *(int *)(&DAT_100354b8 + iVar5));
                    uVar7 = 0x2000d;
                  }
                  else {
                    uVar7 = 0;
                  }
                }
              }
            }
          }
          else {
            sprintf(&DAT_10040500,"Invalid video level(%d)/frame rate code(%d) combination",iVar2,
                    *(int *)(param_1 + 0x34));
            uVar7 = 0x20028;
          }
        }
        else {
          sprintf(&DAT_10040500,"Invalid video profile(%d)/DC precision(%d) combination",iVar3,3);
          uVar7 = 0x20027;
        }
      }
    }
    else {
      sprintf(&DAT_10040500,"Invalid video MPEG2 level (%d), must be 4, 6, 8 or 10",iVar2);
      uVar7 = 0x20020;
    }
  }
  else {
    sprintf(&DAT_10040500,"Invalid video MPEG2 profile (%d), must be 1, 4 or 5",iVar2);
    uVar7 = 0x2001f;
  }
  return uVar7;
}


