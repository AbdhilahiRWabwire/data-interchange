const standard: type = @import("std");

// Character Token Defintion
pub const CharacterToken: type = []const u8;

// Character Tokens
pub const A_TOKEN: [1]CharacterToken = "a";
pub const B_TOKEN: [1]CharacterToken = "b";
pub const C_TOKEN: [1]CharacterToken = "c";
pub const D_TOKEN: [1]CharacterToken = "d";
pub const E_TOKEN: [1]CharacterToken = "e";
pub const F_TOKEN: [1]CharacterToken = "f";
pub const G_TOKEN: [1]CharacterToken = "g";
pub const H_TOKEN: [1]CharacterToken = "h";
pub const I_TOKEN: [1]CharacterToken = "i";
pub const J_TOKEN: [1]CharacterToken = "j";
pub const K_TOKEN: [1]CharacterToken = "k";
pub const L_TOKEN: [1]CharacterToken = "l";
pub const M_TOKEN: [1]CharacterToken = "m";
pub const N_TOKEN: [1]CharacterToken = "n";
pub const O_TOKEN: [1]CharacterToken = "o";
pub const P_TOKEN: [1]CharacterToken = "p";
pub const Q_TOKEN: [1]CharacterToken = "q";
pub const R_TOKEN: [1]CharacterToken = "r";
pub const S_TOKEN: [1]CharacterToken = "s";
pub const T_TOKEN: [1]CharacterToken = "t";
pub const U_TOKEN: [1]CharacterToken = "u";
pub const V_TOKEN: [1]CharacterToken = "v";
pub const W_TOKEN: [1]CharacterToken = "w";
pub const X_TOKEN: [1]CharacterToken = "x";
pub const Y_TOKEN: [1]CharacterToken = "y";
pub const Z_TOKEN: [1]CharacterToken = "z";
pub const CAPITAL_A_TOKEN: [1]CharacterToken = "A";
pub const CAPITAL_B_TOKEN: [1]CharacterToken = "B";
pub const CAPITAL_C_TOKEN: [1]CharacterToken = "C";
pub const CAPITAL_D_TOKEN: [1]CharacterToken = "D";
pub const CAPITAL_E_TOKEN: [1]CharacterToken = "E";
pub const CAPITAL_F_TOKEN: [1]CharacterToken = "F";
pub const CAPITAL_G_TOKEN: [1]CharacterToken = "G";
pub const CAPITAL_H_TOKEN: [1]CharacterToken = "H";
pub const CAPITAL_I_TOKEN: [1]CharacterToken = "I";
pub const CAPITAL_J_TOKEN: [1]CharacterToken = "J";
pub const CAPITAL_K_TOKEN: [1]CharacterToken = "K";
pub const CAPITAL_L_TOKEN: [1]CharacterToken = "L";
pub const CAPITAL_M_TOKEN: [1]CharacterToken = "M";
pub const CAPITAL_N_TOKEN: [1]CharacterToken = "N";
pub const CAPITAL_O_TOKEN: [1]CharacterToken = "O";
pub const CAPITAL_P_TOKEN: [1]CharacterToken = "P";
pub const CAPITAL_Q_TOKEN: [1]CharacterToken = "Q";
pub const CAPITAL_R_TOKEN: [1]CharacterToken = "R";
pub const CAPITAL_S_TOKEN: [1]CharacterToken = "S";
pub const CAPITAL_T_TOKEN: [1]CharacterToken = "T";
pub const CAPITAL_U_TOKEN: [1]CharacterToken = "U";
pub const CAPITAL_V_TOKEN: [1]CharacterToken = "V";
pub const CAPITAL_W_TOKEN: [1]CharacterToken = "W";
pub const CAPITAL_X_TOKEN: [1]CharacterToken = "X";
pub const CAPITAL_Y_TOKEN: [1]CharacterToken = "Y";
pub const CAPITAL_Z_TOKEN: [1]CharacterToken = "Z";

// Character Tokens Vector
pub fn characters_vector() @Vector(48, CharacterToken) {
    const characters: @Vector(48, CharacterToken) = @Vector(48, CharacterToken){
        A_TOKEN,
        B_TOKEN,
        C_TOKEN,
        D_TOKEN,
        E_TOKEN,
        F_TOKEN,
        G_TOKEN,
        H_TOKEN,
        I_TOKEN,
        J_TOKEN,
        K_TOKEN,
        L_TOKEN,
        M_TOKEN,
        N_TOKEN,
        O_TOKEN,
        P_TOKEN,
        Q_TOKEN,
        R_TOKEN,
        S_TOKEN,
        T_TOKEN,
        U_TOKEN,
        V_TOKEN,
        W_TOKEN,
        X_TOKEN,
        Y_TOKEN,
        Z_TOKEN,
        CAPITAL_A_TOKEN,
        CAPITAL_B_TOKEN,
        CAPITAL_C_TOKEN,
        CAPITAL_D_TOKEN,
        CAPITAL_E_TOKEN,
        CAPITAL_F_TOKEN,
        CAPITAL_G_TOKEN,
        CAPITAL_H_TOKEN,
        CAPITAL_I_TOKEN,
        CAPITAL_J_TOKEN,
        CAPITAL_K_TOKEN,
        CAPITAL_L_TOKEN,
        CAPITAL_M_TOKEN,
        CAPITAL_N_TOKEN,
        CAPITAL_O_TOKEN,
        CAPITAL_P_TOKEN,
        CAPITAL_Q_TOKEN,
        CAPITAL_R_TOKEN,
        CAPITAL_S_TOKEN,
        CAPITAL_T_TOKEN,
        CAPITAL_U_TOKEN,
        CAPITAL_V_TOKEN,
        CAPITAL_W_TOKEN,
        CAPITAL_X_TOKEN,
        CAPITAL_Y_TOKEN,
        CAPITAL_Z_TOKEN,
    };

    return characters;
}
